class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0; 
        int j = nums.size() - 1;
        int mid = i + (j-i)/2;
        int ans = INT_MAX;
        while(i<=j){
            if(nums[i] <= nums[mid]){
                ans = min(ans, nums[i]);
                i = mid + 1;
            }
            else{
                ans = min(ans, nums[mid]);
                j = mid - 1;
            }
            mid = i + (j-i)/2;
        }
        return ans;
    }
};