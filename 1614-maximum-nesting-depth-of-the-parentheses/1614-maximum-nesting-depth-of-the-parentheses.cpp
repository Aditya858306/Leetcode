class Solution {
public:
    int maxDepth(string s) {
        int count = 0; 
        
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(s[i] == ')'){
                    int a = st.size();
                    count = max(count,a);
                    st.pop();
                }
            }
        }
        return count;
    }
};