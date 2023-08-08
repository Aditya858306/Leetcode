class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>dp(n+1, 0);
        dp[0] = 0;
        if(n == 0){
            return dp[n];
        }
        dp[1] = 1;
        
        
        int res = 1;
        for(int i = 2; i <=n ; i++){
            if(i%2 == 0){
                dp[i] = dp[i/2];
            }
            else{
                dp[i] = dp[i/2] + dp[(i/2)+1];
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};