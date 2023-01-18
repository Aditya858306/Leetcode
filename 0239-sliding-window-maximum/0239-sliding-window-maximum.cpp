class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>maxi;
        vector<int>ans;
        for(int i = 0 ; i<k ; i++){
             
            while(!maxi.empty() and nums[maxi.back()] <= nums[i]){
                maxi.pop_back();
            }
            
            maxi.push_back(i);
        }
        ans.push_back(nums[maxi.front()]);
        
        for(int i = k ; i<nums.size() ; i++){
            
            while(!maxi.empty() and i - maxi.front() >=k){
                maxi.pop_front();
            }
            
            while(!maxi.empty() and nums[maxi.back()] <= nums[i]){
                maxi.pop_back();
            }
            
            maxi.push_back(i);
            
            ans.push_back(nums[maxi.front()]);
        }
        return ans;
    }
};