class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            string temp=s.substr(0,i+1);
             string ans="";
            if(n%temp.size()==0)
            {
                int val=(n/temp.size());
                for(int i=1;i<=val;i++)
                {
                    ans+=temp;
                }
                if(ans==s)return true;
            }
        }
        return false;
    }
};