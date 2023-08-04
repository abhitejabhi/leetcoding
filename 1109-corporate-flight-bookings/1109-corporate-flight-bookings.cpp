class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n, 0);
        
        for (vector<int>& it : bookings) {
            ans[it[0] - 1] += it[2];
            if (it[1] < n) {
                ans[it[1]] -= it[2];
            }
        }
        
        // Update the cumulative sum in the 'ans' vector
        for (int i = 1; i < n; i++) {
            ans[i] += ans[i - 1];
        }
        
        return ans;
    }
};
