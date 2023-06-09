class Solution {
public:

    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        int ans=0;
        for(auto &rows:grid)
        {
            int ind=upper_bound(rows.begin(),rows.end(),0,greater<int>())-rows.begin();
            ans+=(m-ind);
        }
        return ans;
    }
};