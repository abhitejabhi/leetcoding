class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            while(nums[i]>0)
            {
                int last_digit=nums[i]%10;
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0)
            {
                sum++;
            }
        }
        return sum;
    }
};