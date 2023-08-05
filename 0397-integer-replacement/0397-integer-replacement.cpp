class Solution {
public:
    int f(int n) {
        if (n == 1) {
            return 0;
        }
        if (n == INT_MAX) {
            return 1 + min(f(n / 2), f((n - 1) / 2));
        }
        if (n % 2 == 0) {
            return 1 + f(n / 2);       
        }
        int odd1 = 1 + f(n - 1);
        int odd2 = 1 + f(n + 1);
        return min(odd1, odd2);
    }

    int integerReplacement(int n) {
        return f(n);
    }
};
