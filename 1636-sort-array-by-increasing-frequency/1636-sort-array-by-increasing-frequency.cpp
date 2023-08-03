class Solution {
public:
    static bool comp(pair<int,int>p1,pair<int,int>p2)
    {
        if (p1.second == p2.second) {
            return p1.first > p2.first; // If frequency is the same, sort by value in descending order
        }
        return p1.second < p2.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto &it:nums)
        {
            mp[it]++;
        }
        vector<pair<int,int>>temp;
        for(auto it:mp)
        {
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end(),comp);
        vector<int>ans;
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<temp[i].second;j++)
            {
                ans.push_back(temp[i].first);
            }
        }
        return ans;
    }
};