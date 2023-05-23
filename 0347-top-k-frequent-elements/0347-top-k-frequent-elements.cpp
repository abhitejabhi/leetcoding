class Solution {
public:
     static bool cmp( const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
   }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        


       map<int,int>mp;
       for(auto x:nums)
       {
            mp[x]++;
       }

       vector<pair<int,int>>v(mp.begin() , mp.end());
       

       sort(v.begin(), v.end() ,cmp );

       vector<int>ans;
       
       for(int i=0;i<k;i++)
       {
           ans.push_back(v[i].first);
       }

       return ans;

        

    }
       
};