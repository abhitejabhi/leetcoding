class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(it.second<2)return -1;
             if(it.second%3==0)
            {
                 //cout<<it.second<<endl;
                cnt+=(it.second)/3;
            }
            else if(it.second%2==0)
            {
                while((it.second%3)!=0)
                {
                    cnt++;
                    it.second-=2;
                }
                cnt+=(it.second)/3;
            }
            else
            {
                while((it.second%3)!=0)
                {
                    cnt++;
                    it.second-=2;
                }
                cnt+=(it.second)/3;
            }
        }
        return cnt;
    }
};