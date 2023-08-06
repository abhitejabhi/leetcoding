class Solution {
public:
    vector<int> f(vector<int>& height, int n) {
        vector<int> lmax(n, 0);
        lmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }
        return lmax;
    }

    vector<int> f1(vector<int>& height, int n) {
        vector<int> rmax(n, 0);
        rmax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], height[i]);
        }
        return rmax;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;
        vector<int> lmax = f(height, n);
        vector<int> rmax = f1(height, n);

        for (int i = 0; i < n; i++) {
            int hei = (min(lmax[i], rmax[i]) - height[i]);
            sum += hei;
        }
        return sum;
    }
};
