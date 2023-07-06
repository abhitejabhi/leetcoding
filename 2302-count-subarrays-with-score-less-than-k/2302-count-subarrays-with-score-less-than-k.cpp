class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i=0,j=0;
        int n=nums.size();
        long long count=0,temp=0;
        while(j<n)
        {
            temp+=nums[j];
            while(temp*(j-i+1)>=k)
            {
                temp-=nums[i];
              
                i++;
            }
             if(temp*(j-i+1)<k)
            {
                count+=j-i+1;
            }
            j++;
        }
        return count;
    }
};