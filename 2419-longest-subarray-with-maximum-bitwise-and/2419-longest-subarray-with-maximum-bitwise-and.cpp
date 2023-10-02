class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=maxi)
            {
                maxi=nums[i];
                
            }
          
        }
        int cnt=0,ans=0;
      for(int i=0;i<n;i++)
      {
          if(nums[i]==maxi)
          {
              cnt++;
              ans=max(ans,cnt);
          }else
          {
              cnt=0;
          }
      }
        return ans;
    }
};