class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        
        stack<int>s;
        for(int i = n-2 ;i>=0; i--){
            int num = nums[i];
            while(!s.empty() and s.top()<=num){
                s.pop();
            }
            
            s.push(num);
        }
        vector<int>ans(n);
        for(int i = n-1; i>=0 ;i--){
            int num = nums[i];
            while(!s.empty() and s.top()<= num){
                s.pop();
            }
            if(!s.empty()){
                ans[i] = s.top();
            }
            else{
                ans[i] = -1;
            }
            s.push(num);
        }
        
        return ans;
    }
};