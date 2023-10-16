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
    int f(TreeNode* root, int& sum) { // Use a reference to update sum
        if (!root) return 0;  // Base case: empty node
        int left = f(root->left, sum);
        int right = f(root->right, sum);
        sum += abs(left - right); // Update the sum with the tilt of the current node
        return left + right + root->val; // Return the total sum of the current subtree
    }

    int findTilt(TreeNode* root) {
        int sum = 0;
        f(root, sum);
        return sum;
    }
};
