class Solution {
    string helper(string s, int k , int n){
        if(n <= k){
            return s;
        }
        
        string s1 = "";
        int i = 0;
        while(i<n){
            
            int sum = 0;
            for(int j = 0; j<k and i<n; j++){
                sum += (s[i] - '0');
                i++;
            }
            s1 += to_string(sum);
        }
        
        int n1 = s1.length();
        string val = helper(s1, k, n1);
        return val;
    }
public:
    string digitSum(string s, int k) {
        int n = s.length();
        
        string sum = helper(s, k, n);
        return sum;
    }
};