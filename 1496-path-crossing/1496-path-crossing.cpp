class Solution {
public:
    bool isPathCrossing(string s) {
       map<pair<int,int>,int>mp;
        mp[{0,0}]=1;
        int r=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N')
            {
                c++;
                if(mp.find({r,c})==mp.end())
                {
                    mp[{r,c}]=1;
                }else
                {
                    return true;
                }
            }
            if(s[i]=='S')
            {
                c--;
                if(mp.find({r,c})==mp.end())
                {
                    mp[{r,c}]=1;
                }else
                {
                    return true;
                }
            }
            if(s[i]=='E')
            {
                r++;
                if(mp.find({r,c})==mp.end())
                {
                    mp[{r,c}]=1;
                }else
                {
                    return true;
                }
            }
            if(s[i]=='W')
            {
                r--;
                if(mp.find({r,c})==mp.end())
                {
                    mp[{r,c}]=1;
                }else
                {
                    return true;
                }
            }
        }
        return false;
    }
};