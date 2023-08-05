class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:mp)
        {
            int x=it.first;
            int y=it.second;
            if(y==1&&mp.find(x-1)==mp.end()&&mp.find(x+1)==mp.end())
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};