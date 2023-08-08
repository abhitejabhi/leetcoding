class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; // Initialize with a dummy value
        
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (k != 0) {
                sum %= k; // Take the modulo to handle negative numbers
            }
            
            if (remainderMap.count(sum)) {
                if (i - remainderMap[sum] >= 2) {
                    return true;
                }
            } else {
                remainderMap[sum] = i;
            }
        }
        
        return false;
    }
};
