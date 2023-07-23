class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        
        stack<pair<int,int>>s;
        vector<int>ans(n);
        for(int i = n -1 ; i>=0; i--){
            int num = temperatures[i];
            
            while(!s.empty() and s.top().first <= num){
                s.pop();
            }
            
            if(!s.empty()){
                ans[i] = s.top().second - i;
            }
            else{
                ans[i] = 0;
            }
            s.push(make_pair(num,i));
        }
        return ans;
    }
};