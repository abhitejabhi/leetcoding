class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-mini<=k)
            {
                maxi=nums[i];
            }else
            {
                mini=nums[i];
                ans++;
            }
        }
        return ans+1;
    }
};