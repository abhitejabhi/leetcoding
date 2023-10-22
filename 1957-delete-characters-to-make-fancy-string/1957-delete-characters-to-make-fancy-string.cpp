class Solution {
public:
    string makeFancyString(string s) {
        string temp="";
        int n=s.size();
        int cnt=1;
        temp+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }else
            {
                cnt=1;
            }
            if(cnt<3)
            {
                temp+=s[i];
            }else
            {
                continue;
            }
        }
        return temp;
    }
};