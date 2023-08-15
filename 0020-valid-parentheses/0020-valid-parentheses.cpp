class Solution {
public:
    bool help(char ch, char s) {
        return ((ch == '(' && s == ')') || (ch == '{' && s == '}') || (ch == '[' && s == ']'));
    }
    
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                char ch = st.top();
                st.pop();
                if (!help(ch, s[i])) {
                    return false;
                }
            }
        }
        return st.empty(); // Simplified the return statement
    }
};