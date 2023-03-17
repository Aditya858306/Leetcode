class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        double val = 25/100.0 * arr.size();
        for(auto i: mp){
            if(i.second > val){
                return i.first;
            }
        }
        return -1;
        
    }
};