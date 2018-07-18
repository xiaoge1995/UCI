class Solution {
public:
    string multiply(string num1, string num2) {
        int multi1 = 1;
        int multi2 = 1;
        int sumInter1 = 0;
        int sumInter2 = 0;
        if(num1 == "0" || num2 == "0")
            return "0";
            
        for(int i=num1.length()-1;i>=0;i--){
            sumInter2 = 0;
            multi2 = 1;
            for(int j=num2.length()-1;j>=0;j--){
            sumInter2 += (num1[i]-'0')*(num2[j]-'0')*multi2;
                multi2 *= 10;
            }
            sumInter1 += sumInter2*multi1;
            multi1 *= 10;
        }
        int result = sumInter1;
        int count = 0;
        while(sumInter1 > 0){
            sumInter1 /= 10;
            count ++;
        }
        char ch[100000];
        //char* ch = new char[count];
        string str = "";
        for(int i=count-1;i>=0;i--){
            ch[i] = result%10+'0';
            result /= 10;
        }
        for(int i=0;i<count;i++){
            str+=ch[i];
        }
        return str;
    }
};