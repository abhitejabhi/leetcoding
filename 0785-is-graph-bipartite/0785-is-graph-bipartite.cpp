class Solution {
public:
    bool dfs(int node,int col,int color[],vector<vector<int>>adj)
  {
      color[node]=col;
      for(auto it:adj[node])
      {
          if(color[it]==color[node])return false;
          if(color[it]==-1)
          {
              if(dfs(it,!col,color,adj)==false)return false;
          }
      }
      return true;
      
  }
    bool isBipartite(vector<vector<int>>& adj) {
   int V=adj.size();
         int color[V];
	    for(int i=0;i<V;i++)
	    {
	        color[i]=-1;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(dfs(i,0,color,adj)==false)
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}

    
};