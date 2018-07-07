static int x = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    return 0; }
();
class Solution {
public:
    int numIslands(vector<vector<char>>& grid);
};

vector< vector<int> > visited;  vector< pair<int,int> > V;

void dfsutil(pair<int,int> vertex){
    int i = vertex.first; int j = vertex.second;
    visited[i][j]=1;
    int n=visited.size(); int m=visited[0].size();
    if(j+1<m && visited[i][j+1]==0)   dfsutil(make_pair(i,j+1));  
    if(i+1<n && visited[i+1][j]==0)   dfsutil(make_pair(i+1,j));
    if(j-1>=0 && visited[i][j-1]==0)  dfsutil(make_pair(i,j-1));
    if(i-1>=0 && visited[i-1][j]==0)  dfsutil(make_pair(i-1,j));
    return;
}

void dfsisland(int* total){
    for(int i=0;i<V.size();i++){
        int vx = V[i].first; int vy = V[i].second;
        if(visited[vx][vy]==0){
            (*total)=(*total)+1;
            dfsutil(V[i]);
        }
    }
    return;
}


int Solution::numIslands(vector<vector<char>>& grid){
    int n=grid.size();      if(n==0) return 0; 
    int m=grid[0].size();   V.clear(); 
    
    visited.clear(); visited.resize(n);
    for(int i=0;i<n;i++){
        visited[i].resize(m,0);
    }
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1')  V.push_back(make_pair(i,j));     
            else visited[i][j]=1;
        }
    }
    
    int ret = 0;
    dfsisland(&ret);
    return ret;
}