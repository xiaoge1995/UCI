class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;
        vector<int> res1,res2;
        for(int i=0;i<input.length();i++){
            char ch = input[i];
            if(ch == '+' || ch == '-' || ch == '*'){
                res1 = diffWaysToCompute(input.substr(0,i));
                res2 = diffWaysToCompute(input.substr(i+1));
                
                for(auto n1:res1){
                    for(auto n2:res2){
                        if(ch == '+') res.push_back(n1+n2);
                        if(ch == '-') res.push_back(n1-n2);
                        if(ch == '*') res.push_back(n1*n2);
                    }
                }
            }
        }
        if(res.empty()) res.push_back(atoi(input.c_str()));
        return res;
    }
};