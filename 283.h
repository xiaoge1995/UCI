class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int begin = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[begin++]=nums[i];
            }
        }
        for(int i=begin;i<nums.size();i++){
            nums[i] = 0;
        }
        return;
    }
};