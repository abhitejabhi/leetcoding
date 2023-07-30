class Solution {
public:
    int dp[101][102][101];

    int f(int n, int profit, vector<int>& nums, vector<int>& group, int idx, int sum, int mem, int totalmem, int dp[101][102][101]) {
        if (idx == nums.size()) {
            if (sum >= profit) {
                return 1;
            }
            return 0;
        }
        if (dp[idx][sum][mem] != -1) return dp[idx][sum][mem];
        
        int take = 0;
        if (mem + group[idx] <= totalmem) {
            take = f(n, profit, nums, group, idx + 1, min(sum + nums[idx],profit), mem + group[idx], totalmem, dp);
        }

        int nottake = f(n, profit, nums, group, idx + 1, sum, mem, totalmem, dp);
        return dp[idx][sum][mem] = (take + nottake) % 1000000007;
    }

    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp, -1, sizeof(dp));
        return f(n, minProfit, profit, group, 0, 0, 0, n, dp);
    }
};
