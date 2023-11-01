class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        map<char, int> mp;
        int ans = 0;
        while (j < n) {
            if (mp.find(s[j]) == mp.end()) {
                mp[s[j]]++;
                ans = max(ans, j - i + 1);
                j++;
            } else {
                mp[s[i]]--;
                if (mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        return ans;
    }
};
