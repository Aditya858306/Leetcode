class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int i = 0;
        int j = nums.size()-1;
        
        while(i<j){
            string a = to_string(nums[i]);
            string b = to_string(nums[j]);
            
            string c = a + b;
            sum = sum + stoi(c);
            i++;
            j--;
            
        }
        if(i == j){
            string a = to_string(nums[i]);
            sum = sum + stoi(a);
        }
        return sum;
    }
};