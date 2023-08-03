class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int cnt=0,n=nums.size();
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                cnt+=it.second/2;
                n=n-((it.second/2)*2);
            }
        }
        vector<int>ans(2,0);
        ans[0]=cnt;
        ans[1]=n;
        return ans;
    }
};