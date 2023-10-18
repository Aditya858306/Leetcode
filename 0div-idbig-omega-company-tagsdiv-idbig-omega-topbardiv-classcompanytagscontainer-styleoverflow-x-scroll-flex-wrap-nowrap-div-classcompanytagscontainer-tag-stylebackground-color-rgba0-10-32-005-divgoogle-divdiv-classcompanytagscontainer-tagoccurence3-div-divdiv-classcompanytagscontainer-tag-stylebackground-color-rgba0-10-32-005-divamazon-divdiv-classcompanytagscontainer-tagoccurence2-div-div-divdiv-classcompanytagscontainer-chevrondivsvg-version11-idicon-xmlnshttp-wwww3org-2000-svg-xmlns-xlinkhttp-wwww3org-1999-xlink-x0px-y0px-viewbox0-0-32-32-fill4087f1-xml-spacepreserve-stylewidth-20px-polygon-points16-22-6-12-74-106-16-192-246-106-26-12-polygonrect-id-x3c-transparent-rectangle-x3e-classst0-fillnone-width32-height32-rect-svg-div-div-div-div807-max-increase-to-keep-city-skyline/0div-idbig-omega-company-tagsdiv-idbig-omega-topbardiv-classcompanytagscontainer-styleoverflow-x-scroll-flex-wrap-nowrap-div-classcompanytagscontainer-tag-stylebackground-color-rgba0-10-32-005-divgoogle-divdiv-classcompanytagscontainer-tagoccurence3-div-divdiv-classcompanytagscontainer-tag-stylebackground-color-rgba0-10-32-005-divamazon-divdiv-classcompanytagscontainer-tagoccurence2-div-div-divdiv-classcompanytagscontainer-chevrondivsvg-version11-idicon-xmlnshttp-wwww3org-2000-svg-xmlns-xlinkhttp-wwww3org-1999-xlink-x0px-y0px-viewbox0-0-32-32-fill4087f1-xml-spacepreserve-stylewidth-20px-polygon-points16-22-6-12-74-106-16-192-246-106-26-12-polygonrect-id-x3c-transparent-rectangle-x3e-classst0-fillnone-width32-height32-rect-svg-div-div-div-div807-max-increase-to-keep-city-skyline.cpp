class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        vector<int>row(r, 0), col(r,0);
        
        for(int i = 0; i<r; i++){
            for(int j =0 ; j< c; j++){
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0; i<r; i++){
            for(int j = 0; j < c; j++){
                ans += (min(row[i] , col[j]) - grid[i][j]);
            }
        }
        
        return ans;
    }
};