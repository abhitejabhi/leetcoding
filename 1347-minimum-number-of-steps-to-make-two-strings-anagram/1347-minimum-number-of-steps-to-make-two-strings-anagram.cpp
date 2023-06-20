class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:t )
        {
            mp[it]--;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second<0)
            {
                cnt+=(-1*it.second);
            }
            else
            {
                cnt+=it.second;
            }
        }
        return cnt/2;
    }
};