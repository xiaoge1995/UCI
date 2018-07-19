class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<k+1;j++){
                if(i+j>nums.size()-1)
                    break;
                if(nums[i+j] == nums[i])
                    return true;
            }
        }
        return false;
    }
};