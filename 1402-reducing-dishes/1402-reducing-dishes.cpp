class Solution {
public:
    int f(vector<int>&nums,int idx,int fac, vector<vector<int>>&dp)
    {
        if(idx>=nums.size())return 0;
        if(dp[idx][fac]!=-1)return dp[idx][fac];
        int take=nums[idx]*fac+f(nums,idx+1,fac+1,dp);
        int nottake=0+f(nums,idx+1,fac,dp);
        return dp[idx][fac]=max(take,nottake);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        sort(satisfaction.begin(),satisfaction.end());
        return f(satisfaction,0,1,dp);
    }
};