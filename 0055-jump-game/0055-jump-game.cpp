class Solution {
public:
    bool f(vector<int>&nums,int idx)
    {
        if(idx==nums.size()-1)
        {
            return true;
        }else if(idx>=nums.size())
        {
            return false;
        }
        while(nums[idx]>0)
        {
            if(f(nums,idx+nums[idx]))
            {
                return true;
            }
            nums[idx]--;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return f(nums,0);
    }
};