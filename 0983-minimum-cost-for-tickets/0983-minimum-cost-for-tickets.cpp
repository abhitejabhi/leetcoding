class Solution {
public:
    int f(vector<int>& days, vector<int>& costs,int n,int idx,vector<int>&dp)
    {
        if(idx>=n)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int i1=costs[0]+f(days,costs,n,idx+1,dp);
        int max_day=days[idx]+7;
        int j=idx;
        while(j<n&&days[j]<max_day)
        {
            j++;
        }
        int i7=costs[1]+f(days,costs,n,j,dp);
        max_day=days[idx]+30;
        j=idx;
        while(j<n&&days[j]<max_day)
        {
            j++;
        }
        int i15=costs[2]+f(days,costs,n,j,dp);
        return dp[idx]=min({i1,i7,i15});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
       int n=days.size();
        vector<int>dp(n+1,-1);
       return f(days,costs,n,0,dp);
        
    }
};