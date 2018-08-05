class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(),nums.end());
        int res = nums[0] + nums[1] + nums[2];
        int sum = 0;
        int first,second,third;
        for(int i=0;i<nums.size()-2;i++){
            first = i;
            second = i+1;
            third = nums.size()-1;
            while(second < third){
                sum = nums[first] + nums[second] + nums[third];
                if(abs(sum-target) < abs(res-target)) res = sum;
                if(sum > target) third--;
                if(sum < target) second++;
                if(sum == target) return sum;
            }
        }
        
        return res;
    }
};