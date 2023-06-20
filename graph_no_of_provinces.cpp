class Solution {
  public:
  void dfs(vector< vector<int> >&adj, vector<bool> &visited, int s)
  {
      visited[s]=true;
      for(int i=0; i<adj[s].size(); i++)
      {
          if(adj[s][i]==1 && visited[i]==false)
          {
            //   if(visited[i]==false)
                dfs(adj, visited, i);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int count=0;
        vector<bool> visited(V, false);
        // for(int i=0; i<V; i++)
        //     visited[i]=false;
        for(int i=0; i<V; i++)
        {
            if(visited[i]==false)
            {
                dfs(adj,visited, i);
                count++;
            }
        }
        return count;
    }
};
