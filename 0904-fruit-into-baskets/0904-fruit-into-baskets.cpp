class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int i = 0, j = 0, ans = 0;
        while (j < fruits.size()) {
            mp[fruits[j]]++;
            while (mp.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};