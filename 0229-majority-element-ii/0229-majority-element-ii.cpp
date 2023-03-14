class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size() / 3;
        
        map<int,int>mp;
        for(int i: nums){
            mp[i]++;
        }
        
        for(auto i : mp){
            if(i.second > n){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};