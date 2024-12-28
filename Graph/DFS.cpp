//! DFS Traversals of a Unordered Graph
//* Time  Complexity :- O(V + 2E)
//* Space Complexity :- O(n)

class Solution {
  public:
  
    void dfs(int node,vector<int> &visited,vector<int> &ans,
            vector<vector<int>> &adj)
    {
        visited[node] = 1;
        ans.push_back(node);
        
        for(auto it : adj[node])
        {
            if(!visited[it])
            {
                dfs(it,visited,ans,adj);
            }
        }
    }
   
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        vector<int> visited(adj.size(),0);
        vector<int> ans;
        dfs(0,visited,ans,adj);
        return ans;
    }
};

//* Time  Complexity :- O(V + 2E)
//* Space Complexity :- O(n)
//! Using unordered Set
class Solution {
  public:
  
    void dfs(int node,unordered_set<int> &visited,vector<int> &ans,
            vector<vector<int>> &adj)
    {
        visited.insert(node);
        ans.push_back(node);
        
        for(auto it : adj[node])
        {
            if(!visited.count(it))
            {
                dfs(it,visited,ans,adj);
            }
        }
    }
   
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        unordered_set<int> visited;
        vector<int> ans;
        dfs(0,visited,ans,adj);
        return ans;
    }
};
