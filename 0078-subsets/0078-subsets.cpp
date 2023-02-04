class Solution {
public:
     vector<vector<int>>ans1;
    void answer(int i,vector<int>&nums,vector<int>ds)
    {
        if(i==nums.size())
        {   ans1.push_back(ds);
            return ;
        }
        ds.push_back(nums[i]);
        answer(i+1,nums,ds);
        ds.pop_back();
        answer(i+1,nums,ds);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ans;
        answer(0,nums,ans);
        return ans1;
      
    }
};