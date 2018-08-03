class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1 || n==2) return 0;
        // int hashTable[1000000] = {0};
        
        vector<int> primeNum;
        primeNum.push_back(2);
        bool flag = true;
        for(int i=3;i<n;i+=2){
            flag = true;
            for(int j=0;j<primeNum.size();j++){
                if(i%primeNum[j] == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                primeNum.push_back(i);
            }
        }
        return primeNum.size();
    }
};