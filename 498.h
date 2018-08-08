class Solution {
public:
    bool changeDirection(int zong,int heng, int m, int n, bool direction){
        if(direction == 1){
            if(zong == 0 || heng == n-1) {
                //direction == 0;
                return true;
            }
        }
        else{
            if(zong == m-1 || heng == 0) {
                //direction == 1;
                return true;
            }
        }
        return false;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        
        if(matrix.size() == 0) return res;
        int m = matrix.size();
        if(matrix[0].size() == 0) return res;
        int n = matrix[0].size();
        
        int zong = 0;
        int heng = 0;
        res.push_back(matrix[zong][heng]);
        //右上为1，左下为0
        bool direction = 1;
        
        while(!(zong == m-1 && heng == n-1)){
            if(changeDirection(zong,heng,m,n,direction)){
                direction = 1 - direction;
                if(direction){
                    if(zong != m-1) zong+=1;
                    else heng+=1;
                }
                else{
                    if(heng != n-1) heng+=1;
                    else zong+=1;
                }
                res.push_back(matrix[zong][heng]);
                continue;
            }
            
            if(direction){
                zong-=1;
                heng+=1;
            }
            else{
                zong+=1;
                heng-=1;
            }
            res.push_back(matrix[zong][heng]);
        }
        
        return res;
    }
};