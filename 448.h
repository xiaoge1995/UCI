class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int tmp = 0;
        for(int i=0;i<nums.size();i++){
            tmp = abs(nums[i])-1;
            nums[tmp] = -abs(nums[tmp]);
        }
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0) result.push_back(i+1);
        }
        return result;
    }
};