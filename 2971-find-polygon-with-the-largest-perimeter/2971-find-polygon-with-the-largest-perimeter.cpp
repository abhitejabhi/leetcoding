class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        vector<long long>pre(nums.size(),0);
        pre[0]=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=1;i<n;i++)
        {
            if(pre[i]-nums[i]>nums[i])
            {
                ans=pre[i];
            }
        }
        if(ans==0)return -1;
        return ans;
    }
};