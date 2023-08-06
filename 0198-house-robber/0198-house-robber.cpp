class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size());
        dp[0] = nums[0];
        int neg = 0;
        for(int i = 1; i<nums.size(); i++){
            int p = nums[i];
            if(i>1){
                p+=dp[i-2];
            }
            int np = 0 + dp[i-1];
            dp[i] = max(p,np);
        }
        return dp[nums.size()-1];
    }
};