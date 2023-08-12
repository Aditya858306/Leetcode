class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char>s1;
        stack<int>s2;
        s2.push(-1);
        int len = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                s1.push(s[i]);
                s2.push(i);
            }
            else{
                if(!s1.empty() and s1.top() == '(' and s[i] == ')'){
                    s1.pop();
                    s2.pop();
                    len = max(len, (i-s2.top()));
                }
                else{
                    s2.push(i);
                }
            }
        }
        return len;
    }
};