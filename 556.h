class Solution {
public:
    int nextGreaterElement(int n) {
        //if (n == 1999999999) return -1;
        
        int size = 0;
        vector<int> numTmp;
        int tmp = n;
        
        while(tmp != 0){
            numTmp.push_back(tmp%10);
            tmp = tmp / 10;
        }
        size = numTmp.size();
        vector<int> num(size);
        for(int i=0;i<size;i++){
            num[i] = numTmp[size-1-i];
        }
        
        //after handle original array, find the de-order digit
        int position = -1;
        for(int i=size-2;i>=0;i--){
            if(num[i]<num[i+1]) {
                position = i;
                break;
            }
        }
        
        if(position==-1) return -1;
        
        int firstNum =  num[position];
        vector<int> sortArray(size-position);
        for(int j=0;j<size-position;j++){
            sortArray[j] = num[j+position];
        }
        sort(sortArray.begin(), sortArray.end());
        int newFirstNum = 0;
        for(int i=0;i<sortArray.size();i++){
            if(sortArray[i] > firstNum){
                newFirstNum = sortArray[i];
                sortArray.erase(sortArray.begin()+i);
                break;
            }
        }
        num[position] = newFirstNum;
        for(int i=0;i<sortArray.size();i++){
            num[position+1+i] = sortArray[i];
        }
        
        //
        long res = 0;
        long times = 1;
        for(int i=num.size()-1;i>=0;i--){
            res += times*num[i];
            times*=10;
        }
        if(res > INT_MAX) return -1;
        else{
            int result = res;
            return result;
        }
    }
};