class Solution {
public:
    int f(int mid, vector<int>& weights, int days) {
        int n = weights.size();
        int temp = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (temp + weights[i] <= mid) {
                temp += weights[i];
            } else {
                temp = weights[i];
                ans++;
            }
        }
        ans++; // Increment for the last set of weights if not processed
        return (ans <= days);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); // Minimum possible weight to ship
        int high = accumulate(weights.begin(), weights.end(), 0); // Maximum possible weight to ship
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (f(mid, weights, days)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
