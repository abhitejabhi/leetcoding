class Solution {
public:
    bool f(vector<int>&nums,int idx,vector<int>&dp)
    {
        if(idx==nums.size()-1)
        {
            return true;
        }else if(idx>=nums.size())
        {
            return false;
        }
        if(dp[idx]!=-1)return dp[idx];
        while(nums[idx]>0)
        {
            if(f(nums,idx+nums[idx],dp))
            {
                return dp[idx]=true;
            }
            nums[idx]--;
        }
        return dp[idx]=false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return f(nums,0,dp);
    }
};