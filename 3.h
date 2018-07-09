class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> str;
        int count = 0;
        
        for(int i=0;i<s.length();i++){
            for(int j=0;j<str.size();j++){
                if(s[i] == str[j]){
                    if(str.size()>count) count = str.size();
                    str.erase(str.begin(),str.begin()+j+1);
                    break;
                }
            }
            str.push_back(s[i]);
        }
        if(str.size()>count) count = str.size();
        
        return count;
    }
};