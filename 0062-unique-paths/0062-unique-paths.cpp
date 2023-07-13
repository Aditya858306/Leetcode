class Solution {
    
    
public:
    int uniquePaths(int m, int n) {
        if(m == 1 and n == 1){
            return 1;
        }
        vector<vector<int>>grid(m, vector<int>(n,0));
        
        grid[m-1][n-1] = 0;
        
        for(int i = n-2 ; i>=0; i--){
            grid[m-1][i]= 1;
        }
        
        for(int i = m-2;i>=0; i--){
            grid[i][n-1]= 1;
        }
        
        for(int i = m-2; i>=0; i--){
            for(int j = n-2; j>=0; j--){
                grid[i][j] = grid[i][j+1] + grid[i+1][j];
            }
        }
        
        return grid[0][0];
        
        
    }
};