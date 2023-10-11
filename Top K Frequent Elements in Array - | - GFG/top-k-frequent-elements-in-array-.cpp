//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int, int>mp;
        for(int i : nums){
            mp[i]++;
        }
        
        priority_queue<pair<int, int>>pq;
        
        for(auto i : mp){
            int a = i.first;
            int b = i.second;
            
            pq.push({b,a});
        }
        
        while(k--){
            pair<int,int>p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends