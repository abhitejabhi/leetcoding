class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        int count[26]={0};
        while(j<n)
        {   
            count[s[j]-'A']++;
            while(j-i+1-*max_element(count,count+26)>k)
            {
                count[s[i]-'A']--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};