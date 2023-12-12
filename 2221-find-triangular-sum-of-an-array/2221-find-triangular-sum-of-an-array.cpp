class Solution {
public:
    int f(vector<int>&nums,int size)
    {
        if(size==1)return nums[0];
        vector<int>na;
        for(int i=0;i<size-1;i++)
        {
            int val=(nums[i]+nums[i+1])%10;
            na.push_back(val);
        }
        return f(na,na.size());
    }
    int triangularSum(vector<int>& nums) {
        return f(nums,nums.size());
    }
};