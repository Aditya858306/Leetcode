class Solution {
    void helper(int k, int n, vector<vector<int>>& ans, vector<int>& a, int index, int m){
        if(k == 0 and n == 0){
            ans.push_back(a);
            return;
        }
        
        
        for(int i = index; i<=9 ; i++){
            if(n >= i and k >0)
            {
                a.push_back(i);
                k--;
                helper(k , n-i, ans, a, i+1, m);
                a.pop_back();
                k++;
            }
            
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>a;
        int m = n;
        helper(k, n, ans, a , 1, m);
        
        return ans;
    }
};