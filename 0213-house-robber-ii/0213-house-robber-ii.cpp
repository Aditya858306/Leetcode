class Solution {
    int helper(vector<int> temp){
        vector<int>dp(temp.size());
        dp[0] = temp[0];
        int neg = 0;
        for(int i = 1; i<temp.size(); i++){
            int p = temp[i];
            if(i>1){
                p+=dp[i-2];
            }
            int np = 0 + dp[i-1];
            dp[i] = max(p,np);
        }
        return dp[temp.size()-1];
    }
public:
    int rob(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 0; i<nums.size(); i++){
            if(i != 0){
                ans1.push_back(nums[i]);
            }
            if(i != nums.size()-1){
                ans2.push_back(nums[i]);
            }
        }
        return max(helper(ans1), helper(ans2));
    }
};