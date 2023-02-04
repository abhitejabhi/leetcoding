class Solution {
public:
    void answer(int ind,vector<vector<int>>&ans,vector<int>&ds,int target,vector<int>&nums)
    {
        if(ind==nums.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                return ;
            }
            return ;
        }
        if(nums[ind]<=target)
        {
            ds.push_back(nums[ind]);
            answer(ind,ans,ds,target-nums[ind],nums);
            ds.pop_back();
        }
        answer(ind+1,ans,ds,target,nums);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        answer(0,ans,ds,target,candidates);
        return ans;
    }
};