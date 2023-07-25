class Solution {
public:
    bool f(string s,string t,int i,int j)
    {
        if(j<0)return true;
        if(j>=0&&i<0)return false;
        if(i<0&&j<0)return false;
        if(t[i]==s[j])
        {
            if(f(s,t,i-1,j-1))
            {
                return true;
            }
        }else
        {
            if(f(s,t,i-1,j))
            {
                return true;
            }
        }
        return false;
    }
    bool isSubsequence(string s, string t) {
        int n=t.size()-1;
        int m=s.size()-1;
        return f(s,t,n,m);
    }
};