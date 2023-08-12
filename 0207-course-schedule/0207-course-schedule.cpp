class Solution {

     bool helper(int node, unordered_map<int,vector<int>>& mp, unordered_map<int,bool>& visited, unordered_map<int,bool>& defvisited){
         visited[node] = true;
         defvisited[node] = true;
         for(int i : mp[node]){
             if(!visited[i]){
                 bool ans = helper(i, mp, visited, defvisited);
                 if(ans){
                     return true;
                 }
             }
             else if(defvisited[i]){
                 return true;
             }
         }
         defvisited[node] = false;
         return false;
     }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>mp(numCourses);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            
            mp[u].push_back(v);
        }
        
        unordered_map<int,bool>visited(numCourses);
        unordered_map<int,bool>defvisited(numCourses);
        for(int i = 0; i<numCourses; i++){
            if(!visited[i]){
                bool ans = helper(i, mp, visited, defvisited);
                if(ans){
                    return false;
                }
            }  
        }
        return true;
    }
};