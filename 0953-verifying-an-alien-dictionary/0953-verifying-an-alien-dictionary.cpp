class Solution {
public:
    bool f(const string& s1, const string& s2, const string& order) {
        int i = 0;
        while (i < s1.size() && i < s2.size()) {
            if (s1[i] != s2[i]) {
                return order.find(s1[i]) < order.find(s2[i]);
            }
            i++;
        }
        return s1.size() <= s2.size(); // Handle the case when one is a prefix of the other.
    }

    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0; i < words.size() - 1; i++) { // Iterate up to words.size() - 1
            if (!f(words[i], words[i + 1], order)) {
                return false;
            }
        }
        return true;
    }
};
