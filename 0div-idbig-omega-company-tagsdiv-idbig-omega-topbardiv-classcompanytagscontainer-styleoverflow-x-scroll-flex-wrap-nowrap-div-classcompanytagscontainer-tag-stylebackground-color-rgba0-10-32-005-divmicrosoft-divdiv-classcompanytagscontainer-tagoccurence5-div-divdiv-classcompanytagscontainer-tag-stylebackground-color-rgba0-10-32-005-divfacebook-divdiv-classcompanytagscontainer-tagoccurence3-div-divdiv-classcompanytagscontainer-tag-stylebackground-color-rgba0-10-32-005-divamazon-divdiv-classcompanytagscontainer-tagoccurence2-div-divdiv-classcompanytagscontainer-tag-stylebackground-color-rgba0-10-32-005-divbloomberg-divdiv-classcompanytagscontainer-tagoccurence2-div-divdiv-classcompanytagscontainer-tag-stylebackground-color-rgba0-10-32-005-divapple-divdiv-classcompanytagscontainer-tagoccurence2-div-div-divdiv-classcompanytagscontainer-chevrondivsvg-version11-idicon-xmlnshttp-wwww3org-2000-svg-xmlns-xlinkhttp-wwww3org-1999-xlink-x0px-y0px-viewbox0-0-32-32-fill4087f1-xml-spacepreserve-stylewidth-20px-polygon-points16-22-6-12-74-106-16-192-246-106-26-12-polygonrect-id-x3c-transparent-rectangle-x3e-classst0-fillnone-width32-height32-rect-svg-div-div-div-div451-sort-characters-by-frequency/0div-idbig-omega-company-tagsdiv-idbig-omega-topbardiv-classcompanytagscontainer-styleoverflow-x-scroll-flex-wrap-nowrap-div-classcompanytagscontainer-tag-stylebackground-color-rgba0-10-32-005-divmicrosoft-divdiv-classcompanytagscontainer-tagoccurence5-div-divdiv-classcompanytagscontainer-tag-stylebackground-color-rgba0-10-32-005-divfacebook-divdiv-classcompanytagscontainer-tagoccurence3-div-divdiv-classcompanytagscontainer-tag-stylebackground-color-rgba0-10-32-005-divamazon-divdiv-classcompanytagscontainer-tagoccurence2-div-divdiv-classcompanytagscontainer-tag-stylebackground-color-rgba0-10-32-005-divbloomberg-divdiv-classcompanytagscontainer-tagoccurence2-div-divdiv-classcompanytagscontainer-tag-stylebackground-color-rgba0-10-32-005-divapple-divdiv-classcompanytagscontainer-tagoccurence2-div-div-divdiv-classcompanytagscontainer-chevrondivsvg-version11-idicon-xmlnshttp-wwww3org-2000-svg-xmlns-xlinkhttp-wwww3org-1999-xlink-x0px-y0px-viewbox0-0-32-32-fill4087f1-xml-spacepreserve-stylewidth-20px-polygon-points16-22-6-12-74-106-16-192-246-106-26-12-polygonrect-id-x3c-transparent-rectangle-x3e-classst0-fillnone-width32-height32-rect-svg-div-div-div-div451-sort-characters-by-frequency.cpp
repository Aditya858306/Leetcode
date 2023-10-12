class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(char i : s){
            mp[i]++;
        }
        string s1;
        priority_queue<pair<int,char>>pq;
        for(auto i: mp){
            char a = i.first;
            int b = i.second;
            
            pq.push({b,a});
        }
        
        while(pq.size() > 0){
            pair<int,char> p = pq.top();
            pq.pop();
            
            while(p.first--){
                s1+=p.second;
            }
        }
        return s1;
    }
};