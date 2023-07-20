class Solution {
public:
    int maxConsecutiveAnswers(string s, int K) {
        int n = s.size();
        int ans = 0;
        
        // First, count consecutive 'T's within K changes
        int cntT = 0;
        for (int i = 0, j = 0; j < n; j++) {
            if (s[j] == 'T') {
                cntT++;
            }
            while (j - i + 1 - cntT > K) {
                if (s[i] == 'T') {
                    cntT--;
                }
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        
        // Second, count consecutive 'F's within K changes
        int cntF = 0;
        for (int i = 0, j = 0; j < n; j++) {
            if (s[j] == 'F') {
                cntF++;
            }
            while (j - i + 1 - cntF > K) {
                if (s[i] == 'F') {
                    cntF--;
                }
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        
        return ans;
    }
};
