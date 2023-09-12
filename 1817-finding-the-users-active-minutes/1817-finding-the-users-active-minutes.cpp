class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>mp;
        for(int i=0;i<logs.size();i++)
        {
            mp[logs[i][0]].insert(logs[i][1]);
        }
        unordered_map<int,int>mp2;
        for(auto it:mp)
        {
            mp2[it.second.size()]++;
        }
        vector<int>ans(k,0);
        for(int i=1;i<=k;i++)
        {
            if(mp2.find(i)!=mp2.end())
            {
                ans[i-1]=mp2[i];
            }
        }
        return ans;
    }
};