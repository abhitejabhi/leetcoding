class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(),coins.end());
        long long ans=0,sum=0;
        int idx=0;
        int n=coins.size();
         for(int i=1;i<=target;i++)
         {
             if(idx<n&&coins[idx]<=i)
             {
                 sum+=coins[idx];
                 idx++;
             }else
             {
                 if(sum>=i)continue;
                 ans++;
                 sum+=i;
                 
             }
         }
        return ans;
    }
};