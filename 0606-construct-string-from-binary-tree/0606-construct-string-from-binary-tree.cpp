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
    void f(TreeNode *root,string &ans)
    {   if(root==NULL)return ;
        if(root->left==NULL&&root->right==NULL)
        {
            ans=ans+to_string(root->val);
            return ;
        }
     ans+=to_string(root->val);
        if(root->left)
        {
            ans+='(';
            f(root->left,ans);
            ans+=')';
        }
       if(root->right)
       {
           if(root->left==NULL)
           {
               ans+="()"; 
           }
           ans+='(';
           f(root->right,ans);
           ans+=')';
       }
    }
    string tree2str(TreeNode* root) {
        string ans="";
        f(root,ans);
        return ans;
    }
};