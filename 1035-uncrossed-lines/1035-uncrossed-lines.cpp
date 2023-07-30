class Solution {
public:
    int n, m;

    int f(vector<int>& nums1, vector<int>& nums2, int i, int j,vector<vector<int>>&dp) {
        if (i == n || j == m) {
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if (nums1[i] == nums2[j]) { // Fix the comparison here
            return 1 + f(nums1, nums2, i + 1, j + 1,dp);
        }
        
        return dp[i][j]=max(f(nums1, nums2, i, j + 1,dp), f(nums1, nums2, i + 1, j,dp));
    }

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
         n = nums1.size();
        m = nums2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       
        return f(nums1, nums2, 0, 0,dp);
    }
};
