class Solution {
    
    bool dfs(int node, unordered_map<int, vector<int>>& mp,unordered_map<int, bool>& visited, unordered_map<int, bool>& defvisited, stack<int>& s){
        visited[node] = true;
        defvisited[node] = true;
        
        for(auto i : mp[node]){
            if(!visited[i]){
                bool ans = dfs(i, mp, visited, defvisited, s);
                if(ans){
                    return true;
                }
            }
            else if(defvisited[i]){
                return true;;
            }
        }
        
        defvisited[node] = false;
        s.push(node);
        return false;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>>mp(numCourses);
        
        for(int i = 0 ; i<prerequisites.size(); i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            
            mp[u].push_back(v);
        }
        
        unordered_map<int, bool>visited(numCourses);
        unordered_map<int, bool>defvisited(numCourses);
        stack<int>s;
        for(int i=0; i <numCourses; i++){
            if(!visited[i]){
                bool ans = dfs(i, mp, visited, defvisited, s);
                if(ans){
                    return {};
                }
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};