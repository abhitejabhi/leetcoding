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
    int maxpathdown(TreeNode* root,int &diameter)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=max(0,maxpathdown(root->left,diameter));
        int rh=max(0,maxpathdown(root->right,diameter));
        diameter=max(diameter,lh+rh+root->val);
        return max(0,(root->val+max(lh,rh)));
    }
    int maxPathSum(TreeNode* root) {
        int maxi=root->val;
        maxpathdown(root,maxi);
        return maxi;
    }
};