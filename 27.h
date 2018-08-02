class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int count = 0;
        int start = 0;
        int end = size-1;
        while(start < end+1){
            if(nums[start] != val) start++;
            else{
                nums[start] = nums[end];
                nums[end] = val;
                end--;
            }
        }
        return end+1;
    }
};