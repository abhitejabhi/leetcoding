class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> right(n+1,1),ans(n);
        for(int i=n-1;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];
        }
        int mul=1;
        for(int i=0;i<n;i++)
        {
            ans[i]=mul*right[i+1];
            mul=mul*nums[i];
        }
        return ans;
    }
     
};
