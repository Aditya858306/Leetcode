class Solution {
    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> a, int index){
        if(target == 0){
            ans.push_back(a);
            return;
        }
        if(target < 0){
            return;
        }
        
        for(int i = index; i<candidates.size(); i++){
            a.push_back(candidates[i]);
            helper(candidates,target-candidates[i],ans,a,i);
            a.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        helper(candidates, target, ans, a , 0);
        
        return ans;
    }
    
};