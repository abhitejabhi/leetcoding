class Solution {
public:
    int maxConsecutiveAnswers(string s, int K) {
        int n = s.size();
        int ans = 0;
        int cntT=0,cntF=0;
        int i=0,j=0;
        while(j<n)
    {
            if(s[j]=='T')
            {
                cntT++;
            }
            if(s[j]=='F')
            {
                cntF++;
            }
            while(min(cntT,cntF)>K)
        {
                if(s[i]=='T')
            {
                cntT--;
            }
            if(s[i]=='F')
            {
                cntF--;
            }
                i++;
        }
            
            ans=max(ans,j-i+1);
            j++;
    }
        return ans;
       
}
};
