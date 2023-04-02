class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>ans;
        int i = 0, j = 0;
        while(i<nums1.size() and j<nums2.size()){
            int u = nums1[i][0];
            int v = nums2[j][0];
            
            if(u == v){
                int a = nums1[i][1];
                int b = nums2[j][1];
                
                ans.push_back({u, a+b});
                i++;
                j++;
            }
            else if(u<v){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(u>v){
                ans.push_back(nums2[j]);
                j++;
            }
            
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
        
    }
};