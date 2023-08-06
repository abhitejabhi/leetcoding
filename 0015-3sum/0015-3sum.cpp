class Solution {
public:
    void twosum(vector<int>&nums,int tar,vector<vector<int>>&res,int i)
    {
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]>tar)
            {
                j--;
            }
            else if(nums[i]+nums[j]<tar)
            {
                i++;
            }else
            {
                while(i<j && nums[i]==nums[i+1])
                {
                    i++;
                }
                while(i<j&&nums[j]==nums[j-1])
                {
                    j--;
                }
                res.push_back({-tar,nums[i],nums[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<=n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            int tar=-nums[i];
            twosum(nums,tar,res,i+1);
        }
        return res;
    }
};