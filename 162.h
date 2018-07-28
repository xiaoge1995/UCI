class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1;
        int mid = (low + high)/2;
        
        while(low<high-1){
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                return mid;
            else if(nums[mid] > nums[mid + 1]){
                high = mid - 1;
                mid = (low + high) /2;
            }
            else{
                low = mid + 1;
                mid = (low + high) /2;
            }
            
        }
        return nums[high] > nums[low]? high:low;
    }
};