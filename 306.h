class Solution {
public:
    string add(string n, string m){
            string res;
            int i=n.size()-1, j=m.size()-1, carry=0;
            while(i>=0 || j>=0){
                int sum=carry+(i>=0 ? (n[i--]-'0') : 0) + (j>=0?  (m[j--]-'0') : 0);
                res.push_back(sum%10+'0');
                carry=sum/10;
            }
            if(carry) res.push_back(carry+'0');
            reverse(res.begin(), res.end());
            return res;
        }
    
    bool check(string num1, string num2, string left){
        if(num1.size()>1 && num1[0] == '0' || num2.size()>1 && num2[0] == '0') return false;
        string sum = add(num1, num2);
        if(sum == left) return true;
        if(sum.size() > left.size() || sum.compare(left.substr(0,sum.size())) != 0) return false;
        else return check(num2, sum, left.substr(sum.size()));
    }
    
    bool isAdditiveNumber(string num) {
        for(int i=0;i<num.size()/2;i++){
            for(int j=0;j<(num.size()-i)/2;j++){
                if(check(num.substr(0, i), num.substr(i, i+j), num.substr(i+j))) 
                    return true;
            }
        }
        return false;
    }
};