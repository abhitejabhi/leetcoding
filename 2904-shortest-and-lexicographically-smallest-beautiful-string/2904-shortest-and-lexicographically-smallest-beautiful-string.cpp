class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int l=0,r=0;
        int slen=INT_MAX,sidx=-1,cnt=0;
        vector<string>temp;
        string ans="";
        while(r<n)
        {
            if(s[r]=='1')
            {
                cnt++;
            }
            while(cnt==k)
            {
                if(r-l+1<=slen)
                {
                    if(r-l+1<slen)
                    {
                        ans.clear();
                    }
                    slen=r-l+1;
                    sidx=l;
                    ans=s.substr(sidx,slen);
                    temp.push_back(ans);
                }
               if(s[l]=='1')
            {
                cnt--;
                
            }
                l++;
            }
            r++;
            
        }
        if(sidx==-1)return "";
            sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i].size()==slen)
            {
                return temp[i];
            }
        }
        return "";
    }
};