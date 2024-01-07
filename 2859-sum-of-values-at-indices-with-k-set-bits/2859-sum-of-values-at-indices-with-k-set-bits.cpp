class Solution {
public:
int countset(int n)
{
    int count=0;
    while(n)
    {
       
       if(n%2==1)
        count++;
        n=n/2;
    }
    return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           int a=countset(i);
           if(a==k)
           ans=ans+nums[i];
       }
       return ans; 
    }
};