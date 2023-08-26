class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        for (auto it : s) {
            mp[it]++;
        }
        priority_queue<pair<int, char>, vector<pair<int, char>>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        string temp = "";
        while (pq.size() > 1) {
            auto it1 = pq.top();
            pq.pop();
            auto it2 = pq.top();
            pq.pop();
            temp += it1.second;
            temp += it2.second;
            if (it1.first > 1) {
                it1.first--;
                pq.push(it1);
            }
            if (it2.first > 1) {
                it2.first--;
                pq.push(it2);
            }
        }
        if (!pq.empty()) {
            if (pq.top().first > 1) {
                return "";
            }
            temp += pq.top().second;
        }
        return temp;
    }
};
