class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                cnt1++;
            }
            else if(nums[i]<nums[i-1])
            {
                cnt2++;
            }
            if(nums[i]==nums[i-1])
            {
                cnt1++;
                cnt2++;
            }
        }
        if(cnt1==n-1||cnt2==n-1)return true;
        return false;
    }
};