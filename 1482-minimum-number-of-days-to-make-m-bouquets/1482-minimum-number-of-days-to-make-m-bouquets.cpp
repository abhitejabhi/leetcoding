class Solution {
public:
    int f(int mid, vector<int>& arr, int m, int k) {
        int n = arr.size();
        int cnt = 0, temp = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= mid) {
                temp++;
            } else {
            cnt += (temp / k);
            temp= 0;
            }
        } 
        cnt += (temp / k);
        return (cnt >= m);
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = 1, high = 1e9;
        int ans = -1;
    long long temp=(long)k*(long)m;
        if (temp > bloomDay.size()) return -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (f(mid, bloomDay, m, k)) {
                ans = mid;
                high = mid - 1; // Update high as a possible smaller day
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};