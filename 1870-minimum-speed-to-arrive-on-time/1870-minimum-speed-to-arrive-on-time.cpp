class Solution {
public:
    double f(vector<int>& dis, int k) {
        double time = 0;
        for (int i = 0; i < dis.size(); i++) {
            if (i != dis.size() - 1)
                time += ceil((double)dis[i] / (double)k);
            else
                time += (double)dis[i] / (double)k;
        }
        cout << time << endl;
        return time;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int ans = -1;
        int high = *max_element(dist.begin(), dist.end()) * 100; // Multiply by 100 to avoid floating-point precision issues

        while (low <= high) {
            int mid = low + (high - low) / 2;
            double temp = f(dist, mid);
            
            if (temp <= hour) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
        if (ans == -1) return -1;
        return low;
    }
};
