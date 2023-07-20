class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        if (root->left == NULL && root->right == NULL) {
            return 1;
        }

        int leftDepth = INT_MAX;
        if (root->left) {
            leftDepth = minDepth(root->left);
        }

        int rightDepth = INT_MAX;
        if (root->right) {
            rightDepth = minDepth(root->right);
        }

        return 1 + min(leftDepth, rightDepth);
    }
};
