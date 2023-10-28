class Solution {
public:
    int f(string s1,string t,int len)
    {
        int c=0;
        for(int i=0;i<=t.size()-len;i++)
        {
            int cnt=0;
            string temp=t.substr(i,len);
            for(int j=0;j<len;j++)
            {
                if(s1[j]!=temp[j])
                {
                    cnt++;
                }
            }
            if(cnt==1)c++;
        }
        return c;
    }
    int countSubstrings(string s, string t) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                string temp=s.substr(i,j);
                cnt+=f(temp,t,j);
            }
        }
        return cnt;
    }
};