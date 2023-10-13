class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans(gain.size()+1);
        ans.push_back(0);
        int sum = 0;
        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            ans[i+1] = sum;
        }
        
        return *max_element(ans.begin(), ans.end());
    }
};