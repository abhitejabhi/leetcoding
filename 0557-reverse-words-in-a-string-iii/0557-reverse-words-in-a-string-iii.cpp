class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string temp,ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }else if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp.clear();
                ans+=' ';
            }
        }
        reverse(temp.begin(),temp.end());
                ans+=temp;
                
           return ans;
    }
};