class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> S;
        for(int i=0;i<nums.size();i++){
            S.insert(nums[i]);
        }
        if(nums.size() == S.size()) return false;
        else return true;
    }
};