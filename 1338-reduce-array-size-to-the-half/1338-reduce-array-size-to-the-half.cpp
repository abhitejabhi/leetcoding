class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=ans[i];
            if(cnt>=n/2)
            {
                return i+1;
            }
        }
        return -1;
    }
};