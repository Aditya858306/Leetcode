class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>>output(m,vector<int>(n,0));
        
        output[m-1][n-1] = grid[m-1][n-1];
        
        for(int i = n-2; i>=0;i--){
            output[m-1][i] = grid[m-1][i] + output[m-1][i+1];
        }
            
            
        for(int j = m-2; j>=0; j--){
            output[j][n-1] = grid[j][n-1] + output[j+1][n-1];
        }
        
        for(int i = m-2; i>=0 ; i--){
            for(int j = n-2; j>=0; j--){
                output[i][j] = grid[i][j] + min(output[i+1][j], output[i][j+1]);
            }
        }
            
        return output[0][0];    
            
            
    }
};