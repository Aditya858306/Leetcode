class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int , vector<int>> mp;
        
        for(int i = 0; i<edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        
        unordered_map<int, bool>visited;
        
        queue<int>q;
        
        q.push(source);
        visited[source] = true;
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            if(curr == destination){
                return true;
            }
            vector<int> curNode = mp[curr];
            for(int i = 0; i<curNode.size(); i++){
                if(!visited[curNode[i]]){
                    q.push(curNode[i]);
                    visited[curNode[i]] = true;
                }
            }
        }
        return false;
        
    }
};