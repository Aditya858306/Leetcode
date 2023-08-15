class Solution {
    
    void dfs(int node,vector<vector<int>>& rooms, unordered_map<int,bool>& visited){
        visited[node] = true;
        
        for(int i : rooms[node]){
            if(!visited[i]){
                dfs(i, rooms, visited);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        unordered_map<int,bool>visited;
        
        dfs(0, rooms, visited);
        
        for(int i=0; i < rooms.size(); i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};