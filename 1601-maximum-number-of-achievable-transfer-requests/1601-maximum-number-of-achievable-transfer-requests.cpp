class Solution {
public:
    int res=INT_MIN;
    int m;
    void f(int ind,int count,vector<vector<int>>&requests,vector<int>&build)
    {
        if(ind>=m)
        {
            int flag=true;
            for(auto &it:build)
            {
                if(it!=0)
                {
                    flag=false;
                }
            }
            if(flag)
           {
                res=max(res,count);
            }
            return ;
        }
        int from=requests[ind][0];
        int to=requests[ind][1];
        build[from]--;
        build[to]++;
        f(ind+1,count+1,requests,build);
        build[from]++;
        build[to]--;
        f(ind+1,count,requests,build);
        }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        m=requests.size();
        vector<int>build(n,0);
        f(0,0,requests,build);
        return res;
    }
};