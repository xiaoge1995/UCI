class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1, 0);
        for (int i = 1; i <= num; ++i) {
            int a = (i-1) ^ i;
            if (a >= i) result[i] = 1;
            else {
                result[i] = result[i & ~a] + result[i & a];
            }
        }
        return result;
    }
};