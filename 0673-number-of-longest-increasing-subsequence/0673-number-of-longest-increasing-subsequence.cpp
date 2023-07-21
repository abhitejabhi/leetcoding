class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        if(nums.size()==1)return 1;
        vector<int>t(nums.size(),1);
        vector<int>cnt(nums.size(),1);
        int n=nums.size();
        int res=0,maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    if(t[j]+1==t[i])
                    {
                        cnt[i]=cnt[i]+cnt[j];
                    }
                    else if(t[j]+1>t[i])
                    {
                        t[i]=t[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
            }
            if(t[i]>maxi)
            {
                maxi=t[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(t[i]==maxi)
            {
                res+=cnt[i];
            }
        }
        return res;
    }
};