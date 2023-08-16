class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans;
        
        vector<int>a(n+1,0);
        
        for(int i = 0; i<n ;i++){
            a[A[i]]++;
            a[B[i]]++;
            int count = 0;
            for(int j = 0; j <a.size();j++){
                if(a[j] == 2){
                    count++;
                }
            }
            ans.push_back(count);
        }
        
        return ans;
    }
};