class Solution {
public:
    int count(vector<vector<int>>& board, int i, int j){
        int m = board.size();
        int n = board[0].size();
        int countLive = 0;
        if(i>0 && j>0)
            countLive += board[i-1][j-1];
        if(i>0)
            countLive += board[i-1][j];
        if(i>0 && j<n-1)
            countLive += board[i-1][j+1];
        if(j>0)
            countLive += board[i][j-1];
        if(j<n-1)
            countLive += board[i][j+1];
        if(i<m-1 && j>0)
            countLive += board[i+1][j-1];
        if(i<m-1)
            countLive += board[i+1][j];
        if(i<m-1 && j<n-1)
            countLive += board[i+1][j+1];
        
        return countLive;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        if(m==0)
            return;
        int n = board[0].size();
        if(n==0)
            return;
        int num = 0;
        
        vector<vector<int> > change(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                num = count(board,i,j);
                if(board[i][j]==1){
                    if(num < 2) change[i][j] = 1;
                    if(num > 3) change[i][j] = 1;
                }
                if(board[i][j]==0){
                    if(num == 3) change[i][j] = 1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(change[i][j])
                    board[i][j] = 1 - board[i][j];
            }
        }
        
    }
};