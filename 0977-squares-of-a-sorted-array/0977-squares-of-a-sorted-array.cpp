class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int i=0,j=nums.size()-1;
        int k=nums.size()-1;
        while(i<=j)
        {
            int num1=nums[i]*nums[i];
            int num2=nums[j]*nums[j];
            if(num1>num2)
            {
                ans[k--]=num1;
                i++;
            }else
            {
                ans[k--]=num2;
                j--;
            }
        }
        return ans;
    }
};