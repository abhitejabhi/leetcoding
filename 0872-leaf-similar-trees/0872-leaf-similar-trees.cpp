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
    void f(TreeNode*root,vector<int>&temp)
    {
        if(root==NULL)return ;
        if(root->left==NULL&&root->right==NULL)
        {
            temp.push_back(root->val);
        }
        f(root->left,temp);
        f(root->right,temp);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>temp1,temp2;
        f(root1,temp1);
        f(root2,temp2);
        return (temp1==temp2);
    }
};