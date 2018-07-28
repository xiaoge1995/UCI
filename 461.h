class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        for(int i=0;i<31;i++){
            result += (x%2) ^ (y%2);
            x/=2;
            y/=2;
        }
        return result;
    }
};