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
    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int lh=findhie(root);
        int rh=findhieght(root);
        if(lh==rh)
        {
            return (1<<lh)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int findhie(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int x=0;
        while(root)
        {
            x++;
            root=root->left;
        }
        return x;
    }
    int findhieght(TreeNode*root)
    {
        
        if(root==NULL)
        {
            return 0;
        }
        int x=0;
        while(root)
        {
            x++;
            root=root->right;
        }
        return x;
    }
};