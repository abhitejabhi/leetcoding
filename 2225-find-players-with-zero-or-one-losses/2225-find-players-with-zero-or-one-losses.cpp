#include <vector>
#include <map>

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp1, mp2;
        
        // Count the wins and losses for players
        for (auto &it : matches) {
            mp1[it[0]]++;
            mp2[it[1]]++;
        }
        
        vector<vector<int>> ans(2, vector<int>());
        
        // Find players with zero losses
        for (auto &it : mp1) {
            if (it.second > 0 && mp2.find(it.first) == mp2.end()) {
                ans[0].push_back(it.first);
            }
        }
        
        // Find players with one loss
        for (auto &it : mp2) {
            if ( it.second==1) {
                ans[1].push_back(it.first);
            }
        }
        
        return ans;
    }
};
