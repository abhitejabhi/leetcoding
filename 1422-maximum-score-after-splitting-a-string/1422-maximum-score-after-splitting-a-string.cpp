class Solution {
public:
    int f1(string s1)
    {
        int cnt=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
            {
                cnt++;
            }
        }
        return cnt;
    }
    int f2(string s2)
    {
        int cnt=0;
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='1')
            {
                cnt++;
            }
        }
        return cnt;
    }
    int maxScore(string s) {
        int n=s.size();
        int ans=0;
        for(int i=1;i<n;i++)
        {
            string s1=s.substr(0,i);
            string s2=s.substr(i);
            // if(i==1)
            // {
            //     cout<<s1<<endl;
            //     cout<<s2<<endl;
            // }
            int tzero=f1(s1);
            int tone=f2(s2);
            ans=max(ans,(tzero+tone));
        }
        return ans;
    }
};