class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string ans;
        map<string,string>mp;
        for(auto it:paths)
        {
            mp[it[0]]=it[1];
        }
        string temp=paths[0][0];
        while(true)
        {
            if(mp.find(temp)!=mp.end())
            {
                temp=mp[temp];
                
            }else
            {
                return temp;
            }
        }
        return " ";
    }
};