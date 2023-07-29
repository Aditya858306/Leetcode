class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 0){
            return ans;
        }
        vector<int>ans1;
        ans1.push_back(1);
        ans.push_back(ans1);
        for(int i = 1;i<numRows; i++){
            vector<int>ans1;
            for(int j = 0; j<ans[i-1].size()+1; j++){
                if(j == 0 || j == ans[i-1].size()){
                    ans1.push_back(1);
                }
                else if(j != 0 and j != ans[i-1].size()){
                    int sum = ans[i-1][j-1] + ans[i-1][j];
                    ans1.push_back(sum);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};