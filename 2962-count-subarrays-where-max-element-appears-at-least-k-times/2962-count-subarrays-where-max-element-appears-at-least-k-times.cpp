class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
            }
        }
        unordered_map<int,int>mp;
        int i=0,j=0;
        while(j<n)
        {
            mp[nums[j]]++;
            while(j<n&&mp[maxi]>=k)
            {
                ans+=n-j;
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};