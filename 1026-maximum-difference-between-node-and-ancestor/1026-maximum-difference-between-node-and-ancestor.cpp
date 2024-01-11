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
    int diff;
    void help(TreeNode*root,TreeNode*child)
    {
        if(child==NULL)return ;
         diff=max(abs(root->val-child->val),diff);
         help(root,child->left);
         help(root,child->right);
    }
    void f(TreeNode*root)
    {
        if(root==NULL)return ;
        help(root,root->left);
        help(root,root->right);
        f(root->left);
        f(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
         f(root);
        return diff;
    }
};