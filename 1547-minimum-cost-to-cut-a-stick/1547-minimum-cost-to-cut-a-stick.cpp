class Solution {
public:
    int f(vector<int>&cuts,int l,int r,vector<vector<int>>&dp)
    {
        if(r-l<2)
        {
            return 0;
        }
        if(dp[l][r]!=-1)return dp[l][r];
        int res=INT_MAX;
        for(int idx=l+1;idx<=r-1;idx++)
        {
            int cost=cuts[r]-cuts[l]+f(cuts,l,idx,dp)+f(cuts,idx,r,dp);
            res=min(res,cost);
        }
        return dp[l][r]=res;
    }
    int minCost(int n, vector<int>& cuts) {
        vector<vector<int>>dp(103,vector<int>(103,-1));
        sort(cuts.begin(),cuts.end());
        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        return f(cuts,0,cuts.size()-1,dp);
    }
};