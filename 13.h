class Solution {
public:
    int romanToInt(string s) {
        int size = s.length();
        int result = 0;
        bool flag = false;
    
        for(int i=0;i<size;i++){
            flag = false;
            if(s[i] == 'I' && (i==size-1 || s[i+1] != 'V' && s[i+1] != 'X'))
               result += 1;
            if(s[i] == 'I' && i<size-1 && s[i+1] == 'V'){
                result += 4;
                flag = true;
            }
            if(s[i] == 'I' && i<size-1 && s[i+1] == 'X'){
                result+=9;
                flag = true;
            }
            
            if(s[i] == 'X' && (i==size-1 || s[i+1] != 'L' && s[i+1] != 'C'))
               result += 10;
            if(s[i] == 'X' && i<size-1 && s[i+1] == 'L'){
                result += 40;
                flag = true;
            }
            if(s[i] == 'X' && i<size-1 && s[i+1] == 'C'){
                result+=90;
                flag = true;
            }
            
            if(s[i] == 'C' && (i==size-1 || s[i+1] != 'D' && s[i+1] != 'M'))
               result += 100;
            if(s[i] == 'C' && i<size-1 && s[i+1] == 'D'){
                result += 400;
                flag = true;
            }
            if(s[i] == 'C' && i<size-1 && s[i+1] == 'M'){
                result+=900;
                flag = true;
            }
            
            if(s[i] == 'V')
                result += 5;
            if(s[i] == 'L')
                result += 50;
            if(s[i] == 'D')
                result += 500;
            if(s[i] == 'M')
                result += 1000;
            
            if(flag)
                i++;
        }
        
        return result;
    }
};