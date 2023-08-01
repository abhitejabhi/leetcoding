class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj, vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int dis) {
        vector<vector<int>>adj(n+1);
        for(auto &it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1,0);
        vis[source]={1};
       dfs(source,adj,vis);
        if(vis[dis]==0)return false;
        return true;
    }
};