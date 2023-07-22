class Solution {
    vector<int> helper1(vector<int>& arr, int n){
        vector<int> ans(n);
        stack<int>s;
        
        s.push(-1);
        
        for(int i  = n-1; i>=0 ; i--){
            int num = arr[i];
            while(s.top()!= -1 and arr[s.top()] >= num){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> helper2(vector<int>& arr, int n){
        vector<int> ans(n);
        stack<int>s;
        
        s.push(-1);
        
        for(int i = 0; i<n; i++){
            int num = arr[i];
            while(s.top()!= -1 and arr[s.top()] >= num){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n);
        next = helper1(heights, n);
        
        vector<int>prev(n);
        prev = helper2(heights, n);
        
        int area = INT_MIN;
        
        for(int i = 0; i <n; i++){
            int l = heights[i];
            
            if(next[i] == -1){
                next[i] = n;
            }
            
            int b = next[i] - prev[i] - 1;
            
            int newArea = l * b;
            
            area = max(area, newArea);
        }
        return area;
    }
};