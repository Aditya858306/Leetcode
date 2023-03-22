class Solution {
    void helper(vector<int>& candidates,int target, vector<vector<int>>& ans, vector<int>& a, int index){
        if(target == 0){
            ans.push_back(a);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = index; i<candidates.size(); i++){
            if(i>index and candidates[i]==candidates[i-1]) 
                continue;
            if(candidates[i]>target) 
                break;
            a.push_back(candidates[i]);
            helper(candidates, target-candidates[i], ans, a,i+1);
            a.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>a;
        helper(candidates, target, ans, a,0);
        return ans;
        
    }
};