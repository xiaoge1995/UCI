class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        stack<int> sta;
        for(int i=0;i<32;i++){
            sta.push(n%2);
            n=n/2;
        }
        int k=1;
        for(int i=0;i<32;i++){
            result+=sta.top()*k;
            sta.pop();
            k*=2;
        }
        return result;
    }
};