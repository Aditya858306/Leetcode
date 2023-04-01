class Solution {
    void dfs(int src, int n,vector<vector<int>>& isConnected, unordered_map<int,bool>& visited ){
        visited[src] = true;
        
        vector<int>adj;
        
        for(int i = 0; i<n; i++){
            int x = isConnected[src][i];
            if(x == 1){
                adj.push_back(i);
            }
        }
        
        for(auto i : adj){
            if(!visited[i]){
                dfs(i , n, isConnected, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,bool>visited;
        int count=0;
        int n = isConnected.size();
        
        for(int i = 0; i<n; i++){
            if(!visited[i]){
                count++;
                dfs(i , n, isConnected, visited);
            }
            
        }
        return count;
        
        
    }
};