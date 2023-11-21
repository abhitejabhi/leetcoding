#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> freqMap;
        unordered_set<int> uniqueFreq;
        int deletions = 0;

        // Count frequencies of characters
        for (char c : s) {
            freqMap[c]++;
        }

        // Track and manage unique frequencies
        for (const auto &entry : freqMap) {
            int freq = entry.second;
            // Try decrementing the frequency until it becomes unique
            while (uniqueFreq.count(freq) > 0) {
                deletions++;
                freq--; // Decrement the frequency
            }
            // Add the unique frequency to the set
            if (freq > 0) {
                uniqueFreq.insert(freq);
            }
        }

        return deletions;
    }
};
