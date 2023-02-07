class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag=false;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {   flag=true;
                return nums[i];
                
            }
        }
        if(flag==false)
        {
            return -1;
        }
        return -1;
    }
};