class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==goal)
            {
                count++;
            }
            if(mp.find(sum-goal)!=mp.end())
            {
                count+=mp[sum-goal];
            }
            if(mp.count(sum))
            {
                mp[sum]++;
            }
            else
            {
                mp[sum]=1;
            }
            
        }
        return count;
    }
};