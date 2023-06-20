class Solution {
public:
    bool ispossible(vector<int>&nums,int cap,int days)
    {   int sum=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++)
        {   sum+=nums[i];
            if(sum>cap)
            {
                sum=nums[i];
                cnt++;
            }
        }
     if(cnt<=days)
     {
         return true;
     }
     return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
      int maxi=0;
      int sum=0;
      for(int i=0;i<weights.size();i++)
      {
          sum+=weights[i];
          maxi=max(maxi,weights[i]);
      }
        int low=maxi;
        int high=sum;
        int ans=0;
        while(low<=high)
        {   int mid=low+(high-low)/2;
            if(ispossible(weights,mid,days))
            {
                ans=mid;
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};