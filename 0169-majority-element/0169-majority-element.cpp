class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mpp[nums[i]]>n/2)
            {
                return nums[i];
            }
        }
        return -1;
        
    }
};