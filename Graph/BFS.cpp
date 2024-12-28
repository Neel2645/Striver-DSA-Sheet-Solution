//! BFS Traversals of a Unordered Graph
//* Time  Complexity :- O(V + 2E)
//* Space Complexity :- O(n)

class Solution {
  public:
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int n = adj.size();
        vector<int> visited(n,0);   //  set<int> visited;
        queue<int> q;
        q.push(0);
        visited[0] = 1;   //  visited.insert(0);
        vector<int> ans;
        while(q.size()>0)
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it : adj[node])
            {
                if(!visited[it])  //    if(!visited.count(it))
                {
                    q.push(it);
                    visited[it] = 1;   //  visited.insert(it);
                }
            }
        }
        return ans;
    }
};