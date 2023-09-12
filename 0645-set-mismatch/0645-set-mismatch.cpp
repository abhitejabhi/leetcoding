class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>vis(nums.size()+1,0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(vis[nums[i]])
            {
                ans.push_back(nums[i]);
            }
            else
            {
                vis[nums[i]]=1;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(vis[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};