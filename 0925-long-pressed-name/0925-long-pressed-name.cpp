class Solution {
public:
    bool isLongPressedName(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        int i=0,j=0;
        int n=s1.size(),m=s2.length();
        while(i<n&&j<m)
        {
            if(s1[i]==s2[j])
            {
                i++;
                j++;
            }else if(i>0&&s1[i-1]==s2[j])
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        while(j<m)
        {
            if(s1[i-1]!=s2[j])
            {
                return false;
            }
            j++;
        }
        if(i<n)return false;
        return true;
    }
};