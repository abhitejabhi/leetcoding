class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        int cnt=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());   
        int k=0;
        for(int i=0;i<m;i++)
        {
            if(s[i]>=g[k])
            {
                cnt++;
                k++;
            }
            if(k==n)break;
        }
        return cnt;
    }
};