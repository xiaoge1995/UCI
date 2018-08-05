class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int size = 0;
        int sizeA = a.length();
        int sizeB = b.length();
        if(a.length()>b.length()){
            size = a.length();
            for(int i=0;i<sizeA-sizeB;i++)
                b = "0" + b;
        }
        else{
            size = b.length();
            for(int i=0;i<sizeB-sizeA;i++)
                a = "0" + a;
        }
        
        int jinwei = 0;
        for(int i=size-1;i>=0;i--){
            if(a[i]=='0' && b[i]=='0' && jinwei==0){
                res = "0" + res;
                jinwei = 0;
            }
            else if(a[i]=='0' && b[i]=='1' && jinwei==0){
                res = "1" + res;
                jinwei = 0;
            }
            else if(a[i]=='1' && b[i]=='0' && jinwei==0){
                res = "1" + res;
                jinwei = 0;
            }
            else if(a[i]=='1' && b[i]=='1' && jinwei==0){
                res = "0" +res;
                jinwei = 1;
            }
            else if(a[i]=='0' && b[i]=='0' && jinwei==1){
                res = "1" + res;
                jinwei = 0;
            }
            else if(a[i]=='0' && b[i]=='1' && jinwei==1){
                res = "0" + res;
                jinwei = 1;
            }
            else if(a[i]=='1' && b[i]=='0' && jinwei==1){
                res = "0" + res;
                jinwei = 1;
            }
            else if(a[i]=='1' && b[i]=='1' && jinwei==1){
                res = "1" +res;
                jinwei = 1;
            }
        }
        if(jinwei) res = "1" + res;
        
        return res;
    }
};