class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        int n = strs.size();
        unordered_map<string, vector<string>>mp;
        for(auto i: strs){
            string a = i;
            sort(i.begin(), i.end());
            mp[i].push_back(a);
        }
        for(auto i : mp){
            s.push_back(i.second);
        }
        return s;
    }
};