class Solution {
    
private:
    void solve(vector<int>nums ,set<vector<int>>&s ,  int index){
        if(index >= nums.size()){
            s.insert(nums);
            return;
        }
        for(int i = index ; i < nums.size() ; i++){
            swap(nums[index] , nums[i]);
            solve(nums ,s , index + 1);
            // swap(nums[index] , nums[i]);

        }
            
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        int index = 0;
        solve(nums ,s , index);
        vector<vector<int>> ans(s.begin() , s.end());
        return ans;
    }
};