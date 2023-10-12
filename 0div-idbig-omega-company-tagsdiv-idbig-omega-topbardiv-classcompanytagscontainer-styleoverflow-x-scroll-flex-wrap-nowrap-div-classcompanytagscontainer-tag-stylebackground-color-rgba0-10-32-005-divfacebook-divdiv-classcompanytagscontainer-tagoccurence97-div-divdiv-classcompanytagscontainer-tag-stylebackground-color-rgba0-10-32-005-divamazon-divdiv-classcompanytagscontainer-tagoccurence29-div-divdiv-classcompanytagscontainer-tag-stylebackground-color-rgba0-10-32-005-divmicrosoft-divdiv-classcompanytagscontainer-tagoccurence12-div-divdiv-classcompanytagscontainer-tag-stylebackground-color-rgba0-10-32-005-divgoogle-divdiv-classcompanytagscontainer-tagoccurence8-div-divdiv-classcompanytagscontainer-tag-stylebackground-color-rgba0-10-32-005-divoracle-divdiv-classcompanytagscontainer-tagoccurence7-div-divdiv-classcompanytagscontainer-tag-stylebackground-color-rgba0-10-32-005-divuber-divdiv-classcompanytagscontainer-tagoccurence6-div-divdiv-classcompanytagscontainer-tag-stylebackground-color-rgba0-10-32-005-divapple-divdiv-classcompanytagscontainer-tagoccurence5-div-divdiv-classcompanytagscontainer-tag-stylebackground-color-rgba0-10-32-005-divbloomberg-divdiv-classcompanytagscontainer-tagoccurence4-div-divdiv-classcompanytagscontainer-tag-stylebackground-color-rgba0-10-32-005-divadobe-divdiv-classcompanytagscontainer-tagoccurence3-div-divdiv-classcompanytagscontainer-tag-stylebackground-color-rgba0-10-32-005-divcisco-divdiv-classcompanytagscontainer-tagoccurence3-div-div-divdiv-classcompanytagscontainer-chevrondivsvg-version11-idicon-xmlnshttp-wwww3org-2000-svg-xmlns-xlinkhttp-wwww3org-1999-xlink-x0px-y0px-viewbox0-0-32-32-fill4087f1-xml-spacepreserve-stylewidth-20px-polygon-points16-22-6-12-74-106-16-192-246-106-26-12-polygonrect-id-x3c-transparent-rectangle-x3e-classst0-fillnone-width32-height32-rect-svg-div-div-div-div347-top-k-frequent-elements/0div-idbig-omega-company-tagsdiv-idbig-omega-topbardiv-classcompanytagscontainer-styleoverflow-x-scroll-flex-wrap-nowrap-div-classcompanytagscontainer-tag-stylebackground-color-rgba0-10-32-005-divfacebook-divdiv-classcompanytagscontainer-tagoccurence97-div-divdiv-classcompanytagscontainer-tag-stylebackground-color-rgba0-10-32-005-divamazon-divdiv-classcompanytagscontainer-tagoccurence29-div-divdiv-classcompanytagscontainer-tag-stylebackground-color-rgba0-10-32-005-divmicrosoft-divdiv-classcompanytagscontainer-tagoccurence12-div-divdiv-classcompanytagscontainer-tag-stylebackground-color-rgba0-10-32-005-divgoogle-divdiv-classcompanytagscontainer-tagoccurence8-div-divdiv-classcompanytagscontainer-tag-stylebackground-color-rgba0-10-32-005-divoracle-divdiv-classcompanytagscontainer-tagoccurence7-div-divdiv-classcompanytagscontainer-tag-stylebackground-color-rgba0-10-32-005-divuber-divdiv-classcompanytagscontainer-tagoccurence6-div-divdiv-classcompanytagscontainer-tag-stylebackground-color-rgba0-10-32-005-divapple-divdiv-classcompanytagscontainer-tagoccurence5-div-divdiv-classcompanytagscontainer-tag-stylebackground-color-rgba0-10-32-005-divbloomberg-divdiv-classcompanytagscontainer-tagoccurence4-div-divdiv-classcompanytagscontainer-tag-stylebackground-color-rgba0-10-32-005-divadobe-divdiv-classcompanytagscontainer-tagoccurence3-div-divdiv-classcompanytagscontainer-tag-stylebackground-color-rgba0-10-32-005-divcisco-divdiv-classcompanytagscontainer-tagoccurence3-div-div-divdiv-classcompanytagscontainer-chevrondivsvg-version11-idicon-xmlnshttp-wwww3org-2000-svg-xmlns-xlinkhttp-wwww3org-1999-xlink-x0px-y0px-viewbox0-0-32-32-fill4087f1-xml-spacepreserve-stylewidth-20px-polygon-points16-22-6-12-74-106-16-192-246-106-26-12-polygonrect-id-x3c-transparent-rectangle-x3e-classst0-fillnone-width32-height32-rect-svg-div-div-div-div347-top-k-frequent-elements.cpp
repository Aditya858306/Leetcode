class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        
        priority_queue<pair<int,int>>pq;
        for(auto i : mp){
            int a = i.first;
            int b = i.second;
            
            pq.push({b,a});
        }
        vector<int>ans;
        while(k--){
            pair<int,int>p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        
        return ans;
        
    }
};