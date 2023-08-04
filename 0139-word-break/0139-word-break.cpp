class Solution {
public:
    unordered_set<string>st;
    bool f(int idx,int n,string s,vector<int>&dp)
    {
        if(idx>=n)return true;
        if(dp[idx]!=-1)return dp[idx];
        for(int l=1;l<=n;l++)
        {
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() && f(idx+l,n,s,dp))
            {
                return dp[idx]=true;
            }
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        for(string &word:wordDict)
        {
            st.insert(word);
        }
        if(st.find(s)!=st.end())
        {
            return true;
        }
        return f(0,n,s,dp);
    }
};