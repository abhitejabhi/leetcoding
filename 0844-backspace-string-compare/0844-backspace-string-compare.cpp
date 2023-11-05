class Solution {
public:
    string f(string &s) {
    string temp;
    for (char c : s) {
        if (c == '#') {
            if (!temp.empty()) {
                temp.pop_back(); // Remove the previous character if it exists
            }
        } else {
            temp.push_back(c); // Append non-# characters to the result
        }
    }
    return temp;
}

    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
       string temp1=f(s);
        string temp2=f(t);
        return (temp1==temp2);
    }
};