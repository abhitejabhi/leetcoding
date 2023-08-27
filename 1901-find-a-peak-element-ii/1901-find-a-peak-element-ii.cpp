class Solution {
public:
    vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int n, m;

    bool check(vector<vector<int>>& mat, int i, int j) {
        for (int k = 0; k < 4; k++) {
            int nrow = i + dir[k][0];
            int ncol = j + dir[k][1];
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && mat[nrow][ncol] > mat[i][j]) {
                return false;
            }
        }
        return true;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(mat, i, j)) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};
