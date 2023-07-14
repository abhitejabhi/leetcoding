class Solution {
public:
     int fun(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&mat)
    {
         if(i>=0&&j>=0&&mat[i][j]==1)
         {
             return 0;
         }
        if(i==0&&j==0)
        {
            return 1;
        }
        if(i<0||j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=fun(i-1,j,dp,mat);
        int left=fun(i,j-1,dp,mat);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=fun(m-1,n-1,dp,obstacleGrid);
        return ans; 
    }
};