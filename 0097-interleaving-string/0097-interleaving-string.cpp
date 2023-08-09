class Solution {
public:
    bool f(string &s1,string &s2,string &s3,int i,int j,int k,vector<vector<vector<int>>>&dp)
    {
        if(i==s1.length() && j==s2.length() && k==s3.length())
        {
            return true;
        }
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        bool x=false,y=false;
        if(i!=s1.length())
        {
            if(s1[i]==s3[k])
            {
                x=f(s1,s2,s3,i+1,j,k+1,dp);
            }
        }
         if(j!=s2.length())
        {
            if(s2[j]==s3[k])
            {
                y=f(s1,s2,s3,i,j+1,k+1,dp);
            }
        }
        return dp[i][j][k]=x|y;
    }
    bool isInterleave(string s1, string s2, string s3) {
         vector<vector<vector<int>>>dp(s1.length()+1,vector<vector<int>>(s2.length()+1,vector<int>(s3.length()+1,-1)));
        int i=0,j=0,k=0;
        return f(s1,s2,s3,0,0,0,dp);
    }
};