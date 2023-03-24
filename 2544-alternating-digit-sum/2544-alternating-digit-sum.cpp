class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>arr;
        while(n > 0){
            int n1 = n % 10;
            arr.push_back(n1);
            n = n/10;
        }
        int sum = 0;
        int p = 1;
        for(int i = arr.size()-1; i>=0; i--){
            sum = sum + arr[i] * p;
            p = p * (-1);
        }
        return sum;
    }
};