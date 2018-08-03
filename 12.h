class Solution {
public:
    string intToRoman(int num) {
        int sep[4] = {0};
        for(int i=0;i<4;i++){
            sep[i] = num%10;
            num/=10;
        }
        string str = "";
        if(sep[3]>0){
            for(int i=0;i<sep[3];i++)
                str+="M";
        }
        if(sep[2]==9)
            str+="CM";
        if(sep[2]<=8 && sep[2] >=5){
            str+="D";
            for(int i=0;i<sep[2]-5;i++)
                str+="C";
        }
        if(sep[2]==4)
            str+="CD";
        if(sep[2]>=1 && sep[2]<=3){
            for(int i=0;i<sep[2];i++)
                str+="C";
        }
        
        if(sep[1]==9)
            str+="XC";
        if(sep[1]<=8 && sep[1] >=5){
            str+="L";
            for(int i=0;i<sep[1]-5;i++)
                str+="X";
        }
        if(sep[1]==4)
            str+="XL";
        if(sep[1]>=1 && sep[1]<=3){
            for(int i=0;i<sep[1];i++)
                str+="X";
        }
        
        if(sep[0]==9)
            str+="IX";
        if(sep[0]<=8 && sep[0] >=5){
            str+="V";
            for(int i=0;i<sep[0]-5;i++)
                str+="I";
        }
        if(sep[0]==4)
            str+="IV";
        if(sep[0]>=1 && sep[0]<=3){
            for(int i=0;i<sep[0];i++)
                str+="I";
        }
        return str;
    }
};