class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                int ans = abs(i-start);
                mini = min(mini, ans);
            }
        }
        return mini;
    }
};