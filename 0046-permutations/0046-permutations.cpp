class Solution {
public:
    void function(int ind,vector<int>nums,vector<vector<int>>&ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            function(ind+1,nums,ans);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        function(0,nums,ans);
        return ans;
    }
};