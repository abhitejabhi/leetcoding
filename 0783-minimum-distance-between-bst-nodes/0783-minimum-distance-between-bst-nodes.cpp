/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void f(TreeNode* root, int &prev, int &minDiff) {
        if (root == nullptr) return;

        f(root->left, prev, minDiff);

        if (prev != -1) {
            minDiff = (minDiff == -1) ? root->val - prev : min(minDiff, root->val - prev);
        }

        prev = root->val;

        f(root->right, prev, minDiff);
    }

    int minDiffInBST(TreeNode* root) {
        int prev = -1;
        int minDiff = -1;

        f(root, prev, minDiff);

        return minDiff;
    }
};