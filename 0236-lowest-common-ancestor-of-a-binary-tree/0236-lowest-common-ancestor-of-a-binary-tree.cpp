/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool path(TreeNode*root,TreeNode *p,vector<TreeNode*>&ans1)
    {
        if(root==NULL)
        {
            return false;
        }
        ans1.push_back(root);
        if(root->val==p->val)
        {
            return true;
        }
        if(path(root->left,p,ans1)||path(root->right,p,ans1))
        {
            return true;
        }
        ans1.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>ans1,ans2;
        if(root==NULL)
        {
            return NULL;
        }
        path(root,p,ans1);
        path(root,q,ans2);
        int i=0,j=0;
        TreeNode *node=NULL;
        while(i<ans1.size()&&j<ans2.size())
        {
            if(ans1[i]->val==ans2[j]->val)
            {
                node=ans1[i];
            }
            i++;
            j++;
        }
        return node;
        
    }
};