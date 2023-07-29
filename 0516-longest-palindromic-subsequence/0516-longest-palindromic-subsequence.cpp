class Solution {
public:
    int f(string &s, string &temp, int i, int j, vector<vector<int>>& dp) {
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        if (s[i] == temp[j]) {
            return dp[i][j] = 1 + f(s, temp, i - 1, j - 1, dp);
        }
        return dp[i][j] = max(f(s, temp, i, j - 1, dp), f(s, temp, i - 1, j, dp));
    }
    
    int longestPalindromeSubseq(string s) {
        string temp = s;
        reverse(temp.begin(), temp.end());
        int i = s.size() - 1;
        int j = temp.size() - 1;
        vector<vector<int>> dp(i + 1, vector<int>(j + 1, -1)); // Dynamically allocate the dp vector
        return f(s, temp, i, j, dp);
    }
};
