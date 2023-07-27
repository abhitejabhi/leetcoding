class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long,int> mp[n];
        int res=0;
        for(int i=1;i<n;i++)
        {
            
                long diff=(long)nums[i]-nums[i-1];
                if(mp[i-1].find(diff)!=mp[i-1].end())
                {
                    mp[i][diff]+=1+mp[i-1][diff];
                    res+=mp[i-1][diff];
                }else
                {
                     mp[i][diff]+=1+0;
                }
                
        }
        return res;
    }
};