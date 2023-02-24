class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int maxLen = 0, left = 0;
        
        for (int right = 0; right < n; right++) {
            if (mp.find(s[right]) != mp.end()) {
                left = max(left, mp[s[right]] + 1);
            }
            mp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
