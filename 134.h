class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int leftGas = 0;
        bool flag = true;
        bool turn = false;
        int size = gas.size();
        for(int i=0;i<size;i++){
            flag = true;
            leftGas = 0;
            turn = false;
            int j = i;
            for(int j1=i;j1<size+i;j1++){
                if(j>=size && !turn){
                    j = j-size;
                    turn = true;
                }
                leftGas = leftGas+gas[j]-cost[j];
                if(leftGas < 0){
                    flag = false;
                    break;
                }  
                j++;
            }
            if(flag==true) return i;
        }
        return -1;
    }
};