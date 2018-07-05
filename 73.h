class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return;
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    for(int k = 0; k < matrix.size(); k++) {
                        if(matrix[k][j] != 0) {
                            matrix[k][j] = -INT_MAX;
                        }
                    }
                    for(int l = 0; l < matrix[i].size(); l++) {
                        if(matrix[i][l] != 0) {
                            matrix[i][l] = -INT_MAX;
                        }
                    }
                }
            }
        }
        
        for(int i=0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == -INT_MAX) matrix[i][j] = 0;
            }
        }
    }
};