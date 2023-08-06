class Solution {
public:
    int N,Goal,K;
    int mod=1e9+7;
    long solve(int count_song,int count_unique,vector<vector<int>>&dp)
    {
        if(count_song==Goal)
        {
            if(count_unique==N)
            {
                return 1;
            }
            return 0;
        }
        if(dp[count_song][count_unique]!=-1)return dp[count_song][count_unique];
        long long  result=0;
        if(count_unique<N)
        {
            result+= (N-count_unique)* solve(count_song+1,count_unique+1,dp);
        }
        if(count_unique>K)
        {
            result+= (count_unique-K)*solve(count_song+1,count_unique,dp);
        }
        return dp[count_song][count_unique]=(result)%mod;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int>>dp(101,vector<int>(101,-1));
        N=n,Goal=goal,K=k;
        return solve(0,0,dp);
    }
};