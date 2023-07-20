class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        vector<int>temp(26,0);
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                cnt++;
                ans.push_back(i);
            }
        }
        if(cnt==2){
         if((s[ans[0]]==goal[ans[1]])&&(s[ans[1]]==goal[ans[0]]))
        {
            return true;
        }
        }
        else if(cnt==0)
        {
            for(auto &it:s)
            {
                temp[it-'a']++;
                if(temp[it-'a']>=2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};