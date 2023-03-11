class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int , vector<int>>mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]].push_back(i);
        };
        int maxfreq = 0;
        for(auto it: mp){
            maxfreq = max(maxfreq, (int)it.second.size());
        }
        int sublen = nums.size();
        for(auto i : mp){
            if(i.second.size() == maxfreq){
                sublen = min(sublen, i.second.back() - i.second[0] + 1);
            }
        }
        return sublen;
    }
};