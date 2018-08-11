class Solution {
public:
    vector<int> available(int num, int N){
        vector<int> res;
        for(int i=1;i<=N;i++){
            if(i % num == 0 || num % i == 0) res.push_back(i);
        }
        return res;
    }
    
    int count(int N, int position, vector<int> left){
        if(position == N + 1) return 1;
        bool flag = false;
        vector<int> ava = available(position,N);
        for(int i=0;i<ava.size();i++){
            if(left[ava[i]] == 1) flag = true;
        }
        if(!flag) return 0;
        
        int sum = 0;
        for(int i=0;i<ava.size();i++){
            if(left[ava[i]] == 1){
                left[ava[i]] = 0;
                sum += count(N,position+1,left);
                left[ava[i]] = 1;
            }            
        }
        return sum;
    }
    
    int countArrangement(int N) {
        vector<int> left(N+1,1);

        return count(N,1,left);
    }
};