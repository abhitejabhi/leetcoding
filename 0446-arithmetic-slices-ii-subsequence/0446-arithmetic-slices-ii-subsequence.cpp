class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long,int> mp[n];
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                long diff=(long)nums[i]-nums[j];
                if(mp[j].find(diff)!=mp[j].end())
                {
                    mp[i][diff]+=1+mp[j][diff];
                    res+=mp[j][diff];
                }else
                {
                     mp[i][diff]+=1+0;
                }
                
            }
        }
        return res;
    }
};