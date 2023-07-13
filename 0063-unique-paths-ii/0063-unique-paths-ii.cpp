class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1] == 1 || obstacleGrid[0][0] == 1 ){
            return 0;
        }
        if(obstacleGrid[m-1][n-1] == 0 and obstacleGrid.size() == 1){
            return 1;
        }
        vector<vector<long long int>>output(m,vector<long long int>(n,0));
        
        output[m-1][n-1] = 0;
        int flag = 0;
        for(int i = n-2; i>=0; i--){
            if(obstacleGrid[m-1][i] != 1 and flag != 1){
                output[m-1][i] = 1;
            }
            else{
                flag = 1;
                output[m-1][i] = 0;
            }
        }
        if(m == 1){
            return output[0][0];
        }
        flag = 0;
        for(int i = m-2; i>=0; i--){
            if(obstacleGrid[i][n-1] != 1 and flag != 1){
                output[i][n-1] = 1;
            }
            else{
                flag = 1;
                output[i][n-1] = 0;
            }
        }
        
        for(int i = m-2; i>=0; i--){
            for(int j = n-2; j>=0; j--){
                if(obstacleGrid[i][j] == 1){
                    output[i][j] = 0;
                }
                else{
                    output[i][j] = output[i][j+1] + output[i+1][j];
                }
            }
        }
        return output[0][0];
    }
};