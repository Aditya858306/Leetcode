class Solution {
    
private:
    void solve(vector<int>nums ,vector<vector<int>>&s ,  int index){
        if(index >= nums.size()){
            s.push_back(nums);
            return;
        }
        for(int i = index ; i < nums.size() ; i++){
            
            if(index != i and nums[index] == nums[i]) continue;
            swap(nums[index] , nums[i]);
            solve(nums ,s , index + 1);
            // swap(nums[index] , nums[i]);

        }
            
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>s;
        int index = 0;
        solve(nums ,s , index);
        // vector<vector<int>> ans(s.begin() , s.end());
        return s;
    }
};