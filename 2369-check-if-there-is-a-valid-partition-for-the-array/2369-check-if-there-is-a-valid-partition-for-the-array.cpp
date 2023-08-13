class Solution {
public:
    bool solve(vector<int>&nums,int idx,vector<int>&dp)
    {
        if(idx>=nums.size())
        {
            return true;
        }
        if(dp[idx]!=-1)return dp[idx];
        bool result=false;
        if(idx+1<nums.size()&&nums[idx]==nums[idx+1])
        {
            result|=solve(nums,idx+2,dp);
        }
       
        if(idx+2<nums.size()&&nums[idx]==nums[idx+1]&&nums[idx+1]==nums[idx+2])
        {
            result|=solve(nums,idx+3,dp);
        }
       
        if(idx+2<nums.size()&&nums[idx+1]-nums[idx]==1&&nums[idx+2]-nums[idx+1]==1)
        {
            result|=solve(nums,idx+3,dp);
        }
        
        return dp[idx]=result;
    }
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,dp);
    }
};