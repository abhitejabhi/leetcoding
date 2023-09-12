class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]++;
            }else 
            {
                mp.clear();
                mp[s[i]]++;
                cnt++;
            }
            //if(i==2)cout<<cnt;
        }
        return ++cnt;
    }
};