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
    TreeNode* increasingBST(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        // Create a dummy node for the new tree
        TreeNode* dummy = new TreeNode(0);
        TreeNode* current = dummy;
        
        inorderTraversal(root, current);
        
        // Save the head of the new tree
        TreeNode* newRoot = dummy->right;
        
        // Clean up the dummy node
        delete dummy;
        
        return newRoot;
    }

    void inorderTraversal(TreeNode* node, TreeNode*& current) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left, current);
        
        // Modify the current node's pointers
        current->right = new TreeNode(node->val);
        current = current->right;

        inorderTraversal(node->right, current);
    }
};
