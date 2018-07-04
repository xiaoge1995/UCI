class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        if(n==0){
            ans.push_back("");
            return ans;
        }
        string s = "";
        generateParenthesisHelper(s,ans,n,n,n);
        return ans;
    }
    
    void generateParenthesisHelper(string& s,vector<string>& ans,int l,int r,int n){
        if(l==0 && r==0){
            ans.push_back(s);
            return;
        }        
        if(l>0){
           s.push_back('(');
            generateParenthesisHelper(s,ans,l-1,r,n);
            s.pop_back();
        }
        if(r>0 && r>l){
            s.push_back(')');
            generateParenthesisHelper(s,ans,l,r-1,n);
            s.pop_back();
        }
    }  
};