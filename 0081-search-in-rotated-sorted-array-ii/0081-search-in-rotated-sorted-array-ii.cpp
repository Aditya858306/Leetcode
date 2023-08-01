class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() -1;
        int mid = i + (j-i)/2;
        while(i <= j){
            if(nums[mid] == target){
                return true;
            }
            if(nums[i] == nums[mid] and nums[mid] == nums[j]){
                i = i+1;
                j = j-1;
                continue;
            }
            if(nums[i] <=  nums[mid]){
                if(target >= nums[i] and target <= nums[mid]){
                    j = mid - 1;
                }
                else{
                    i = mid + 1;
                }
                
            }
            else{
                if(target >= nums[mid] and target <= nums[j] ){
                    i = mid+1;
                }
                else{
                    j = mid-1;
                }
            }
            
            mid = i + (j-i)/2;
        }
        return false;
    }
};