class Solution {
    void dfs(int node,vector<vector<int>>& graph, unordered_map<int,bool>& visited, vector<int>& ans,vector<vector<int>>& ans1){
        visited[node]=true;
        ans.push_back(node);
        if(node == (graph.size()-1)){
            ans1.push_back(ans);
            ans.pop_back();
            visited[node] = false;
            return;
        }
        
        for(int i : graph[node]){
            if(!visited[i]){
                dfs(i, graph, visited, ans, ans1);
            }
        }
        ans.pop_back();
        visited[node] = false;
        return;
        
        
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>ans1;
        unordered_map<int,bool>visited;
        vector<int>ans;
        
        dfs(0, graph, visited, ans , ans1);
        
        return ans1;
        
    }
};