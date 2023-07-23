class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        s.push(-1);
        unordered_map<int,int>mp;
        
        int n = nums2.size();
        for(int i = n-1 ; i>=0; i--){
            int num = nums2[i];
            
            while(s.top() != -1 and s.top() <= num){
                s.pop();
            }
            
            mp[num] = s.top();
            s.push(num);
        }
        
        int m = nums1.size();
        vector<int>ans;
        
        for(int i = 0; i < m; i++){
            int a = mp[nums1[i]];
            
            ans.push_back(a);
        }
        return ans;
        
    }
};