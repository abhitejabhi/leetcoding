class Solution {
public:
    bool dfs(int n, vector<vector<int>>& adj, vector<int>& color, int node, int curcol) {
        color[node] = curcol;
        for (auto &it : adj[node]) {
            if (color[it] == curcol) {
                return false;
            }
            if (color[it] == -1) {
                if (dfs(n, adj, color, it, 1 - curcol) == false) {
                    return false;
                }
            }
        }
        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n + 1);
        for (const auto& d : dislikes) {
            adj[d[0]].push_back(d[1]);
            adj[d[1]].push_back(d[0]);
        }

        vector<int> color(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            if (color[i] == -1) {
                if (dfs(n, adj, color, i, 0) == false) {
                    return false;
                }
            }
        }

        return true;
    }
};
