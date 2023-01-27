class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
       map<int,int>mpp;
           for(int i=0;i<nums.size();i++)
           {
               count+=mpp[nums[i]]++;
           }
        return count;
    }
};