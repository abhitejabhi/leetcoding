class Solution {
public:
    vector<int> partitionLabels(string s) {
        int cnt=0;
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]-'a']=i;
        }
        int prev=-1;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            maxi=max(mp[s[i]-'a'],maxi);
            if(i==maxi)
            {
                ans.push_back(maxi-prev);
                prev=maxi;
            }
        }
        return ans;
        
    }
};