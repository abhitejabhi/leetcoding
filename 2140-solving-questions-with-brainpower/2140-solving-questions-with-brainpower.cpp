class Solution {
public:
    long long f(vector<vector<int>>&questions,int n,int idx,vector<long long>&dp)
    {
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx]!=-1)return dp[idx];
        long long take=questions[idx][0]+f(questions,n,idx+questions[idx][1]+1,dp);
        long long nottake=f(questions,n,idx+1,dp);
        return dp[idx]=max(take,nottake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        
        int n=questions.size();
       vector<long long>dp(n+1,-1);
        return f(questions,n,0,dp);
    }
};