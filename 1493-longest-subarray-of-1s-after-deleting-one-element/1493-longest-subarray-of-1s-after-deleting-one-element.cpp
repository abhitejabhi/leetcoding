class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
         int ans=0,last0=-1;
         for(j=0;j<n;j++)
         {
             if(nums[j]==0)
             {
                 i=last0+1;
                 last0=j;
             }
             ans=max(ans,j-i);
         }
        return ans;
    }
};