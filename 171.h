class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        int timer = 1;
        for(int i=0;i<s.length();i++){
            res+=(s[s.length()-1-i]-'A'+1) * timer;
            timer *= 26;
        }
        return res;
    }
};