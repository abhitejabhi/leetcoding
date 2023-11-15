class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if (arr.size() == 1) return 1;
        
        arr[0] = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) > 1) {
                // Ensure the element remains within the limits
                arr[i] = arr[i - 1] + 1;
            }
        }
        
        return arr.back();
    }
};
