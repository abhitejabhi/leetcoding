class Solution {
public:
    int t[501][501];
    int solve(int i, int j, string &s) {
 
        if(i >= j)
            return 0;
        
        if(t[i][j] != -1)
            return t[i][j];
        
        if(s[i] == s[j])
            return t[i][j] = solve(i+1, j-1, s);
        
        return t[i][j] = 1 + min(solve(i, j-1, s), solve(i+1, j, s));
        
    }
    
    int minInsertions(string s) {
        int n = s.length();
        
        memset(t, -1, sizeof(t));
        
        return solve(0, n-1, s);
    }
};