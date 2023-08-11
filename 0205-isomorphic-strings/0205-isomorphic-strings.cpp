class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        map<char,char>mp;
        set<char>st;
        for(int i=0;i<s.length();i++)
        {
           
           if(mp.count(s[i])==1)
           {
               if(mp[s[i]]!=t[i])
               {
                   return false;
               }
           }else
           {
              if(st.find(t[i])!=st.end())
            {
                return false;
            }
               mp[s[i]]=t[i];
               st.insert(t[i]);
           }
        }
        return true;

    }
};