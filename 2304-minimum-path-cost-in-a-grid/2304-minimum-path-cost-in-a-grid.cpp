class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>output(m,vector<int>(n,0));
        
        for(int i =0; i<n; i++){
            output[m-1][i] = grid[m-1][i];
        }
        
        for(int i = m-2; i>=0; i--){
            for(int j = 0; j<n ; j++){
                int ans = INT_MAX;
                
                for(int k = 0; k<n ; k++){
                    ans = min(ans, output[i+1][k] + moveCost[grid[i][j]][k]);
                }
                output[i][j] = ans + grid[i][j];
            }
        }
        return *min_element(output[0].begin(), output[0].end());
    }
};