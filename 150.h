class Solution {
public:
    int strToInt(string str){
        return atoi(str.c_str());
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int op1, op2;
        for(int i=0;i<tokens.size();i++){
                if(tokens[i] == "+"){
                    op2 = nums.top();
                    nums.pop();
                    op1 = nums.top();
                    nums.pop();
                    nums.push(op1+op2);
                }
                else if(tokens[i] == "-"){
                        op2 = nums.top();
                        nums.pop();
                        op1 = nums.top();
                        nums.pop();
                        nums.push(op1-op2);
                }
                    else if(tokens[i] == "*"){
                            op2 = nums.top();
                            nums.pop();
                            op1 = nums.top();
                            nums.pop();
                            nums.push(op1*op2);
                    }
                        else if(tokens[i] == "/"){
                                op2 = nums.top();
                                nums.pop();
                                op1 = nums.top();
                                nums.pop();
                                nums.push(op1/op2);
                        }
                            else
                                nums.push(strToInt(tokens[i]));       
            }
        return nums.top();
    }
};