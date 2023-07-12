class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size() - 2;
        
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }
        
        if (i == -1) return -1;
        
        int j = s.size() - 1;
        while (s[i] >= s[j]) {
            j--;
        }
        
        swap(s[i], s[j]);
        string res = "";
        string s1 = s.substr(0, i + 1);
        string s2 = s.substr(i + 1, s.size());
        sort(s2.begin(), s2.end());
        res = s1 + s2;
        
        long long ans = stoll(res);
        return (ans > INT_MAX) ? -1 : ans;
    }
};
