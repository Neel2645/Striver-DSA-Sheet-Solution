//! Print adjacency list :- GFG Question

//* Time  Complexity :- O(Edges)
//* Space Complexity :- O(1)

class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> adjList(V);
        for(auto it:edges)
        {
            adjList[it.first].push_back(it.second);
            adjList[it.second].push_back(it.first);
        }
        return adjList;
    }
};
