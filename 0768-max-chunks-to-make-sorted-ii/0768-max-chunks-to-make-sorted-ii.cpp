class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
         int n=arr.size();
        if(arr[0]>arr[n-1])return 1;
        vector<int>rmin(n+1,0);
        rmin[n]=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            rmin[i]=min(rmin[i+1],arr[i]);
        }
        int cnt=0;
        int lmax=INT_MIN;
        for(int i=0;i<n;i++)
        {
            lmax=max(lmax,arr[i]);
            if(lmax<=rmin[i+1])
            {
                cnt++;
            }
        }
        return cnt;
    }
};