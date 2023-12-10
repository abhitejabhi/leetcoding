class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        int ans=0;
        char ch='0';
        for(int i=0;i<n;i++)
        {
            if(s[i]!=ch)
            {
                ans++;
                ch=s[i];
            }
        }
        return ans;
        
    }
};