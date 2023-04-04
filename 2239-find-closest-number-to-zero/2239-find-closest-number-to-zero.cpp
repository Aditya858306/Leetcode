class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min = INT_MAX;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            int a = abs(nums[i] - 0);
            if(a < min){
                min = a;
                ans = nums[i];
            }
            else if( a == min){
                if(nums[i] > ans){
                    ans = nums[i];
                }
                
            }
        }
        return ans;
    }
};