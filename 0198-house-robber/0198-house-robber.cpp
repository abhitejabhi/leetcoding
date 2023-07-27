class Solution {
public:
    int f(vector<int>&nums,int idx,vector<int>&dp)
    {
        if(idx>=nums.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        int steal=nums[idx]+f(nums,idx+2,dp);
        int notsteal=f(nums,idx+1,dp);
        return dp[idx]=max(steal,notsteal);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return f(nums,0,dp);
    }
};