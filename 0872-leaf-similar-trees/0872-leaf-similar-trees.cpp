class Solution {
public:
    void f(TreeNode* root, vector<int>& ans1) {
        if (root) {
            if (!root->left && !root->right) {
                ans1.push_back(root->val);
                return;
            }
            f(root->left, ans1);
            f(root->right, ans1);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        f(root1, ans1);
        f(root2, ans2);
        return ans1 == ans2;
    }
};
