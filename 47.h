class Solution {
private:
    void helper(vector<int>& unique_nums, vector<int>& count, vector<int>& aux, 
                int recursion_level, vector<vector<int>>& result, int n) {
        if(recursion_level == n) {
            result.push_back(aux);
            //cout << "Recursion Level " << recursion_level <<" { ";for(int x: aux) cout << x << ", "; cout << "}" << endl; 
            return;
        }
        for(int i = 0; i < unique_nums.size(); i++) {
            if(count[i] == 0) {
                continue;
            }
            int temp = aux[recursion_level];
            aux[recursion_level] = unique_nums[i];
            //cout << "Recursion Level " << recursion_level <<" { ";for(int x: aux) cout << x << ", "; cout << "}" << endl;            
            count[i]--;
            helper(unique_nums,count,aux,recursion_level+1, result,n);
            count[i]++;
            aux[recursion_level] = temp;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int> frequency;
        /* count sort */
        for(int num: nums) {
            if(frequency.find(num) == frequency.end()) {
                frequency[num] = 0;
            }
            frequency[num]++;
        }
        /* store the counted values in containers */
        vector<int> unique_nums;
        vector<int> count;
        for(unordered_map<int,int>::iterator it = frequency.begin(); it != frequency.end(); it++) {
            unique_nums.push_back(it->first);
            count.push_back(it->second);
        }
        vector<vector<int>> result;
        vector<int> aux(nums.size());
        helper(unique_nums,count, aux, 0,result, nums.size());
        return result;
    }
};