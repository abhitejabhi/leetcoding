class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        int ans=mp.size();
        for(int i=0;i<v.size();i++)
        {
            if(k==0||k<v[i].first)
            {
                return ans;
            }
            k-=v[i].first;
            ans--;
        }
        return ans;
    }
};