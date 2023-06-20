class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int target=sum-x;
        int maxLen=0,cursum=0;
        int i=0;
        bool res=false;
        for(int j=0;j<n;j++)
        {   cursum+=nums[j];
            while(i<=j&&cursum>target)
            {  cursum-=nums[i];
                i++;
            }
            if(cursum==target)
            {
                res=true;
                maxLen=max(maxLen,j-i+1);
            }
        }
        if(res)
        {
            return n-maxLen;
        }
        return -1;
    }
};