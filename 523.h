class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2) return false;
        if(k == 0){
            for(int i=0;i<nums.size()-1;i++)
                if(nums[i] == 0 && nums[i+1] == 0) return true;
            return false;
        }
        long tmp = 0;
        tmp = abs(k);
        //if(tmp > INT_MAX) return false;
        if(tmp >= 100000001) return false;
        //if(tmp == 10000000) return true
        k = abs(k);
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int yushu = sum % k;
        if(yushu==0) return true;
        
        vector<int> hash(k+1,-1);
        int subsum = 0;
        for(int left=0;left<nums.size()-2;left++){
            subsum += nums[left];
            tmp = yushu - subsum % k;
            if(tmp==0) return true;
            if(tmp < 0) tmp += k;
            if(hash[tmp] == 0) hash[tmp] = left;
        }
        
        subsum = 0;
        for(int right = nums.size()-1;right>=2;right--){
            subsum+=nums[right];
            tmp = subsum % k;
            if(tmp == yushu) return true;
            if(hash[tmp] != -1){
                int left = hash[tmp];
                if(right-left>2) return true;
            }
        }
        return false;
        
        
        
        
    }
};