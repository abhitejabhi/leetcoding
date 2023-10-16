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
    int f(TreeNode* root,int val)
    {
       if(root==NULL)return 0;
        val=(val*2)+root->val;
        int left=f(root->left,val);
        int right=f(root->right,val);
         if(root->left==NULL&&root->right==NULL)
         {
             return val;
         }
        return left+right;
        
    }
    int sumRootToLeaf(TreeNode* root) {
        return f(root,0);
    }
};