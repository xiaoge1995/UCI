class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        vector<int> bucket(size+1, 0);
        for(auto num:citations){
            if(num>=size) bucket[size]++;
            if(num<size) bucket[num]++;
        }
        
        int count = 0;
        for(int i=size;i>=0;i--){
            count += bucket[i];
            if(count >= i) return i;
        }
    }
};