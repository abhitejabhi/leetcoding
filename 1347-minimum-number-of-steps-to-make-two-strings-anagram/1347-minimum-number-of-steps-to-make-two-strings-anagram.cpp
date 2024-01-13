class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:t)
        {
           if(mp[it]>0)
           {
               mp[it]--;
           }
        }
        int cnt=0;
        for(auto it:mp)
        {
            cnt+=it.second;
        }
        return cnt;
    }
};