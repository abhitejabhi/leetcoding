class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1) {
            return 0;  // Base case: the first row has only one character '0'.
        }

        int mid = (1 << (n - 2)); // Calculate the midpoint of the previous row.

        if (k <= mid) {
            return kthGrammar(n - 1, k); // The character at K is the same as in the previous row.
        } else {
            // The character at K is the complement of the character in the previous row.
            return 1 - kthGrammar(n - 1, k - mid);
        }
    }
};
