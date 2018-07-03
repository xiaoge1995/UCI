class Solution {
public:
   
   bool wordBreak(string s, unordered_set<string> &dict) {
            bool *table = new bool[s.size()];
        for(int i = 0; i < s.size(); i++)
            table[i] = false;
        int i = 0;
        for(i = 0; i < s.size(); i++) {
            if(dict.find(s.substr(0,i+1)) != dict.end()) {
                table[i] = true;
                continue;
            }
            for(int j = i; j > 0; j--) {
          
                if(table[j-1] && dict.find(s.substr(j,i-j+1)) != dict.end()) {
                    table[i] = true;
                    break;
                }
            }
        }
        return table[i-1];
       
    }
};