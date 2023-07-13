class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>rmin(nums.size()+1,0);
        rmin[n]=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            rmin[i]=min(rmin[i+1],nums[i]);
        }
        int lmax=INT_MIN;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            lmax=max(lmax,nums[i]);
            if(lmax<=rmin[i+1])
            {
                return i+1;
            }
        }
        return -1;
    }
};