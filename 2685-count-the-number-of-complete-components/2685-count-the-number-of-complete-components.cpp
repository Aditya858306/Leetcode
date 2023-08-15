class Solution {
    void dfs(int node, unordered_map<int, vector<int>>& mp, unordered_map<int, bool>& visited, int& c, int& v){
        visited[node] = true;
        v++;
        c += mp[node].size();
        for(int i : mp[node]){
            if(!visited[i]){
                dfs(i, mp, visited,c,v);
            }
        }
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>>mp;
        for(int i = 0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        
        
        unordered_map<int, bool>visited;
        int count = 0;
        for(int i = 0; i<n ;i++){
            if(!visited[i]){
                int c=0 , v=0;
                dfs(i, mp, visited,c,v);
                if(c == v*(v-1)){
                    count++;
                }
                
            }
        }
        
        return count;
    }
};