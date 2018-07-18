class Solution {
public:
    int firstUniqChar(string s) {
        int hashArray[26] = {0};
        for(int i=0;i<s.length();i++){
            hashArray[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(hashArray[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};