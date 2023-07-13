class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even(nums.size(),0),odd(nums.size(),0);
        vector<int>res;
        int j=0, k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even[j++]=nums[i];
            }else
            {
                odd[k++]=nums[i];
            }
        }
        for(int i=0;i<j;i++)
        {   
            res.push_back(even[i]);
            
        }
        int ind=0;
        for(int i=j;i<nums.size();i++)
        {
            res.push_back(odd[ind++]);
        }
        return res;
    }
};