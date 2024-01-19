class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) neg.push_back(nums[i]);
            if (nums[i] > 0) pos.push_back(nums[i]);
        }
        int k = 0, r = 0;
        int cnt = 0, n = nums.size();
        while (cnt < n) {
            if (cnt % 2 == 0) {
                ans.push_back(pos[k++]);
            } else if (cnt % 2) {
                ans.push_back(neg[r++]);
            }
            cnt++;  // Increment cnt inside the loop to avoid an infinite loop
        }
        return ans;
    }
};
