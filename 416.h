class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int size = nums.size();
        int total = 0;
    
        for(int i=0;i<size;i++){
            total += nums[i];    
        }
        if(total%2 == 1) return false;
        else total/=2;
        
        vector<bool> accessible(total+1, false);
        accessible[0] = true;
        
        for(auto num: nums){
            for(int i=total;i>=num;i--){
                if(accessible[i-num] == true)
                    accessible[i] = true;
            }
        }
        return accessible[total];
    }
};