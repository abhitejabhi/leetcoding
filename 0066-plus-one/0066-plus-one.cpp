class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the rightmost digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No carry, so return the result.
            } else {
                digits[i] = 0; // Set the current digit to 0 and continue to the next one.
            }
        }
        
        
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
