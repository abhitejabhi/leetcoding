class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>ans;
        int vis[51]={0};
        vis[1]=1;
        int i=1,j=1;
        while(1)
        {
            i=(i+(j*(k)))%n;
            j++;
            if(vis[i]==1)
            {
                break;
            }else
            {
                vis[i]=1;
            }
            if(i==0)
            {
                vis[n]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};