class Solution {
public:
    char findTheDifference(string s, string t) {
        int hashTableS[26] = {0};
        int hashTableT[26] = {0};
        
        for(int i=0;i<s.length();i++){
            hashTableS[s[i]-'a']++;
            hashTableT[t[i]-'a']++;
        }
        hashTableT[t[t.length()-1]-'a']++;
        
        for(int i=0;i<26;i++){
            if(hashTableS[i] != hashTableT[i]) return 'a'+i;
        }
    }
};