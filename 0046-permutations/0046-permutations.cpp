class Solution {
public:
    void function(vector<int>ds,vector<vector<int>>&ans,vector<int>nums,int arr[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
                ds.push_back(nums[i]);
                function(ds,ans,nums,arr);
                arr[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=0;
        }
        function(ds,ans,nums,arr);
        return ans;
    }
};