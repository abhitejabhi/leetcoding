class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if (num1 == "0" || num2 == "0") {
            return "0"; // Return string "0" instead of integer 0
        }
        vector<int> temp(n + m, 0);
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                temp[i + j + 1] += (num1[j] - '0') * (num2[i] - '0');
                temp[i + j] += temp[i + j + 1] / 10; // Add carry to the previous digit
                temp[i + j + 1] %= 10; // Update the current digit
            }
        }
        int i = 0;
        while (i < temp.size() && temp[i] == 0) i++;
        string res = "";
        while (i < temp.size()) {
            res.push_back(temp[i] + '0');
            i++;
        }
        return res;
    }
};
