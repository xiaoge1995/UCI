class Solution {
public:
    bool check(int hashTable[]){
        for(int i=0;i<26;i++){
            if(hashTable[i] != 0) return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int hashTable[26] = {0};
        int size1 = s1.length();
        int size2 = s2.length();
        if(size1 > size2) return false;
        
        for(int i=0;i<size1;i++){
            hashTable[s1[i]-'a']++;
            hashTable[s2[i]-'a']--;
        }
        if(check(hashTable)) return true;
        for(int i=size1;i<size2;i++){
            hashTable[s2[i]-'a']--;
            hashTable[s2[i-size1]-'a']++;
            if(check(hashTable)) return true;
        }
        return false;
        
        
    }
};