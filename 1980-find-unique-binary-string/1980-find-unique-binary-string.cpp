class Solution {
public:
    int n;
    string ans="";
    unordered_set<string> memo; // Memoization set to store visited combinations

    void f(set<string>& st, int idx, vector<string>& nums, string temp) {
        if (idx == n) {
            if (st.find(temp) == st.end() && memo.find(temp) == memo.end()) {
                ans = temp;
            }
            return;
        }

        f(st, idx + 1, nums, temp + '0');
        f(st, idx + 1, nums, temp + '1');
    }

    string findDifferentBinaryString(vector<string>& nums) {
        set<string> st;
        n = nums[0].size();

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        string temp = "";
        f(st, 0, nums, temp);
        return ans;
    }
};
