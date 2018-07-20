class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        
        vector<int> result;
        
        int m = matrix.size();
        if(m==0) return result;
        int n = matrix[0].size();

        vector<vector<int> > count(m,vector<int>(n));
        int i(0),j(0);
        bool update = false;
        
        
        while(1){
            update = false;
            while(i<m && j<n && i>=0 && j>=0 && count[i][j] == 0){
                result.push_back(matrix[i][j]);
                count[i][j] = 1;
                update = true;
                j++;
            }
            j--;
            i++;
            while(i<m && j<n && i>=0 && j>=0 && count[i][j] == 0){
                result.push_back(matrix[i][j]);
                count[i][j] = 1;
                update = true;
                i++;
            }
            i--;
            j--;
            while(i<m && j<n && i>=0 && j>=0 && count[i][j] == 0){
                result.push_back(matrix[i][j]);
                count[i][j] = 1;
                update = true;
                j--;
            }
            j++;
            i--;
            while(i<m && j<n && i>=0 && j>=0 && count[i][j] == 0){
                result.push_back(matrix[i][j]);
                count[i][j] = 1;
                update = true;
                i--;
            }
            i++;
            j++;
            
            if(!update) break;
        }
        return result;
    }
};