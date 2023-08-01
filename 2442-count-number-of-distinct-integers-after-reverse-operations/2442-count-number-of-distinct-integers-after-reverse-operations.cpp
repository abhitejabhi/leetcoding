class Solution {
public:
    int help(int n)
    {
        int res=0;
        while(n>0)
        {
            int rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(auto it:nums)
        {
            s.insert(it);
            int temp=help(it);
            s.insert(temp);
        }
        return s.size();
        
    }
};