class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
          for(int i=0;i<n;i++){
            if(st.size()==0 || (st.top()<0 && asteroids[i]>0) || (st.top()>0 and asteroids[i]>0) || (st.top()<0 and asteroids[i]<0)){
                st.push(asteroids[i]); 
            }else{
                while(st.size()>0 && st.top()>0 && st.top() < abs(asteroids[i])) st.pop();
                
                if(st.size()==0 || st.top()<0){
                    st.push(asteroids[i]);
                }else if(st.top() == abs(asteroids[i])){
                    st.pop(); 
                }
            }
        }
        
        vector<int> ans(st.size());
        int i=st.size()-1;
        while(!st.empty()){
            ans[i]=st.top();
            i--;
            st.pop();
        }
        return ans;
    }
};