class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val=nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                cnt++;
            }else
            {
                cnt--;
            }
            if(cnt==0)
            {
                val=nums[i];
                cnt=1;
            }
        }
        cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                cnt++;
            }
        }
        if(cnt>nums.size()/2)return val;
        return -1;
    }
};