class Solution {
public:
    int f(vector<int>& jd, int n, int idx, int d,vector<vector<int>>&dp) {
        if (d == 1) {
            return *max_element(jd.begin() + idx, jd.end());
        }
           if(dp[d][idx]!=-1)return dp[d][idx];
        int maxd = INT_MIN;
        int res = INT_MAX;
        for (int i = idx; i <= n - d; i++) {
            maxd = max(maxd, jd[i]);
            int temp = maxd + f(jd, n, i + 1, d - 1,dp);
            res = min(res, temp);
        }
        return dp[d][idx]=res;
    }

    int minDifficulty(vector<int>& jd, int d) {
        if(d>jd.size())return -1;
        vector<vector<int>>dp(12,vector<int>(302,-1));
        int n = jd.size();
        return f(jd, n, 0, d,dp);
    }
};
