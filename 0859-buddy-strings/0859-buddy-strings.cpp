#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        if (s == goal) {
            // Check if the strings are identical.
            // We can form buddy strings only if there are at least two identical characters in s.
            // For that, we check if there's a character with frequency >= 2 in s.
            vector<int> freq(26, 0);
            for (char ch : s) {
                freq[ch - 'a']++;
                if (freq[ch - 'a'] >= 2) {
                    return true;
                }
            }
        } else {
            // Find the positions where s and goal have different characters.
            vector<int> diffPos;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] != goal[i]) {
                    diffPos.push_back(i);
                }
            }

            // To be buddy strings, there should be exactly two positions with different characters.
            if (diffPos.size() == 2 && s[diffPos[0]] == goal[diffPos[1]] && s[diffPos[1]] == goal[diffPos[0]]) {
                return true;
            }
        }

        return false;
    }
};
