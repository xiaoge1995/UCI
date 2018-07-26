class Solution {
public:
    struct count{
        int d;
        int r;
        int current;
        int total;
        count(int _d, int _r, int _current, int _total): d(_d), r(_r), current(_current), total(_total) {}
    };
    
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size();
        if(m==0)
            return 0;
        int n = dungeon[0].size();
        if(n==0)
            return 0;
        
        int minCost = INT_MIN;
        
        stack<count> S;
        count root(0,0,dungeon[0][0],dungeon[0][0]);
        S.push(root);
        
        while(!S.empty()){
            count tmp = S.top();
            S.pop();
            if(tmp.d < m-1){
                count down(tmp.d+1,tmp.r,tmp.current+dungeon[tmp.d+1][tmp.r],tmp.current+dungeon[tmp.d+1][tmp.r]<tmp.total? tmp.current+dungeon[tmp.d+1][tmp.r]:tmp.total);
                S.push(down);
            }
            if(tmp.r < n-1){
                count down(tmp.d,tmp.r+1,tmp.current+dungeon[tmp.d][tmp.r+1],tmp.current+dungeon[tmp.d][tmp.r+1]<tmp.total? tmp.current+dungeon[tmp.d][tmp.r+1]:tmp.total);
                S.push(down);
            }
            if(tmp.d == m-1 && tmp.r == n-1){
                minCost = tmp.total > minCost? tmp.total:minCost;
            }
        }
        return (-minCost + 1)>0? -minCost+1:1;
    }
};