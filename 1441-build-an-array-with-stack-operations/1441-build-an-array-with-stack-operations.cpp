class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        
        map<int,int>mp;
        for(int i : target){
            mp[i]++;
        }
        
        int num = target[target.size() - 1];
        
        for(int i=1; i<=n and i<=num; i++){
            if(mp[i] == 1){
                ans.push_back("Push");
            }
            else if(mp[i] == 0){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};