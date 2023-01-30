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
     TreeNode *bst(TreeNode *root,int key)
     {
         if(root==NULL)
         {
             return NULL;
         }
         while(root!=NULL&&root->val!=key)
         {
             if(root->val<key)
             {
                 root=root->right;
             }else
             {
                 root=root->left;
             }
         }
         return root;
     }  
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        for(int i=low;i<=high;i++)
        {
            TreeNode *node=bst(root,i);
            if(node==NULL)
            {
                sum+=0;
            }else
            {
                sum+=node->val;
            }
            
        }
        return sum;
    }
};