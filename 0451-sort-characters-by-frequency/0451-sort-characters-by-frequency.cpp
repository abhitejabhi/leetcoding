class Solution {
public:
    static bool comp(pair<char,int>p1,pair<char,int>p2)
    {
        return p1.second>p2.second;
    }
    string frequencySort(string s) {
        map<char, int> mp;
        for (auto &it : s) {
            mp[it]++;
        }
        
        // Create a vector of pairs from the map
        vector<pair<char, int>> freqPairs;
        for (auto it : mp) {
            freqPairs.push_back(it);
        }
        
        // Custom sorting based on frequency in descending order
       sort(freqPairs.begin(),freqPairs.end(),comp);
        
        // Build the result string based on sorted frequency
        string ans = "";
        for (auto it : freqPairs) {
            for (int i = 0; i < it.second; i++) {
                ans += it.first;
            }
        }
        
        return ans;
    }
};
