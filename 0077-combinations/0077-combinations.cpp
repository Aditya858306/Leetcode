class Solution {
    
    void helper( vector<vector<int>>& ans, vector<int>& a, int n, int k, int index)
    {
        if(a.size() > k){
            return;
        }
        
        if(a.size() == k){
            ans.push_back(a);
            return;
        }
        
        for(int i = index; i<=n ; i++){
            a.push_back(i);
            helper(ans,a,n,k,i+1);
            a.pop_back();
        }
        
        
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>a;
        vector<vector<int>>ans;
        
        helper(ans, a, n, k,1);
        return ans;
    }
};


//     void helper(int k, int n, vector<vector<int>>& ans, vector<int>& a, int index){
//         if(a.size()>k){
//             return;
//         }
//         if(a.size() == k){
//             ans.push_back(a);
//             return;
//         }
        
        
//         for(int i = index; i<=n ; i++){
//             a.push_back(i);
//             helper(k , n, ans, a, i+1);
//             a.pop_back();
            
//         }
//     }
// public:
//     vector<vector<int>> combine(int n, int k) {
//         vector<vector<int>>ans;
//         vector<int>a;
//         int m = n;
//         solve(k, n, ans, a , 1);
        
//         return ans;
//     }