class Solution {
public:
    int f(string &s1, string &s2, int i, int j,vector<vector<int>>&dp) {
        if (i < 0 && j < 0) return 0;
        if (i < 0) {
            int sum = 0;
            while (j >= 0) {
                sum += static_cast<int>(s2[j]);
                j--;
            }
            return sum;
        }
        if (j < 0) {
            int sum = 0;
            while (i >= 0) {
                sum += static_cast<int>(s1[i]);
                i--;
            }
            return sum;
        }
        if(dp[i][j]!=-1)return dp[i][j];

        if (s1[i] == s2[j]) {
            return dp[i][j]=f(s1, s2, i - 1, j - 1,dp);
        }

        int fir = f(s1, s2, i - 1, j,dp) + static_cast<int>(s1[i]);
        int sec = f(s1, s2, i, j - 1,dp) + static_cast<int>(s2[j]);
        return dp[i][j]=min(fir, sec);
    }

    int minimumDeleteSum(string s1, string s2) {
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        return f(s1, s2, i, j,dp);
    }
};
