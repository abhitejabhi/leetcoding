class Solution {
public:
    int result=INT_MAX;
    int n;
    void solve(int ind,vector<int>&cookies,int k,vector<int>&child)
    {
        if(ind>=n)
        {
            int temp=*max_element(child.begin(),child.end());
            result=min(result,temp);
            return ;
        }
        int cookie=cookies[ind];
        for(int i=0;i<k;i++)
        {   
            child[i]+=cookie;
            if(child[i]==0)break;
            solve(ind+1,cookies,k,child);
            child[i]-=cookie;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        n=cookies.size();
        vector<int>child(k,0);
        solve(0,cookies,k,child);
        return result;
    }
};