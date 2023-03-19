class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
//         map<int,vector<int>>mp;
//         for(int i = 0; i<edges.size(); i++){
//             int u = edges[i][0];
//             int v = edges[i][1];
            
//             mp[u].push_back(v);
//             mp[v].push_back(u);
//         }
        
//         for(auto j : mp){
//             if(j.second.size() == edges.size()){
//                 return j.first;
//             }
//         }
//         return -1;
        map<int,int> mp;
        for (int i=0; i<edges.size(); i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for (auto val: mp){
            if (val.second== (edges.size()))return val.first;
        }
        return -1;
    }
};