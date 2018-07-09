class Solution {
public:
    bool isAnagram(string s, string t) {
        int sCount[26]={0};
        int tCount[26]={0};
        int num;
        for(int i=0;i<s.length();i++){
            num = s[i] - 'a';
            sCount[num]++;
        }
        for(int i=0;i<t.length();i++){
            num = t[i] - 'a';
            tCount[num]++;
        }
        for(int i=0;i<26;i++){
            if(sCount[i] != tCount[i]) return false;
        }
        return true;
    }
};