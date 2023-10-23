class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int ocnt=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2==1)
            {
                ocnt++;
            }else
            {
                ocnt--;
            }
        }
        if(ocnt>1)
        {
            return s.length()-ocnt+1;
        }
        return s.length();
        
    }
};