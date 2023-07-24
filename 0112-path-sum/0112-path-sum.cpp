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
    bool f(TreeNode *root,int k,int sum)
    {    if(root==NULL)
        {
            return false;
        }
     
        if(root->left==NULL&&root->right==NULL)
        {
            sum+=root->val;
            if(sum==k)return true;
            return false;
        }
        if(f(root->left,k,sum+root->val))
        {
            return true;
        }
        if(f(root->right,k,sum+=root->val))
        {
            return true;
        }
        return false;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return f(root,targetSum,0);
    }
};