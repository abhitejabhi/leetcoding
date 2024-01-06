class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<20;i++)
        {
            int val=0;
            for(int j=0;j<nums.size();j++)
            {
                 val=val^(nums[j]&(1<<i)); 
            }
            int ans=k&(1<<i);
            if(val!=ans)cnt++;
        }
        return cnt;
    }
};