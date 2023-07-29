class Solution {
public:
    int t[5001][2];
    int maxP(vector<int>& prices, int day, int n, int buy) {
        if(day >= n)
            return 0;
        
        int profit = 0;
        if(t[day][buy] != -1) {
            return t[day][buy];
        }
        //buy
        if(buy) {
            int consider      = maxP(prices, day+1, n, false) - prices[day];
            int not_consider  = maxP(prices, day+1, n, true);
            profit = max({profit, consider, not_consider});
        } else { //sell
            int consider      = maxP(prices, day+2, n, true) + prices[day];
            int not_consider  = maxP(prices, day+1, n, false);
            profit = max({profit, consider, not_consider}); 
        }
        
        return t[day][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        memset(t, -1, sizeof(t));
        return maxP(prices, 0, n, true);
    }
};