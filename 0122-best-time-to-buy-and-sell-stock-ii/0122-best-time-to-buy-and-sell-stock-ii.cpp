class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0,x;
        x = prices[0];
        for(auto &i: prices){
            if(i > x){
                ans += i-x;
            }
            x = i;
        }
        return ans;
    }
};