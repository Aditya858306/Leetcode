class Solution {
    void dfs(vector<vector<char>>& grid, int i , int j, int r, int c){
        if(i<0 or i>=r or j<0 or j>=c or grid[i][j] != '1'){
            return;
        }
        grid[i][j] = '2';
        
        dfs(grid ,i, j+1 , r, c);
        dfs(grid ,i+1,j , r, c);
        dfs(grid ,i-1, j , r, c);
        dfs(grid ,i, j-1 , r, c);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if(rows == 0){
            return 0;
        }
        
        int cols = grid[0].size();
        int n=0;
        for(int i =0 ;i<rows;i++){
            for(int j =0;j<cols;j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i,j,rows,cols);
                    n+=1;
                }
            }
        }
        return n;
    }
};