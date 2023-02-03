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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
          return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int size=q.size();
            int minindex=q.front().second;
            int left=0,right=0;
            for(int i=0;i<size;i++)
            {
                long curind=q.front().second-minindex;
                TreeNode *node=q.front().first;
                q.pop();
                if(i==0)
                {
                     left=curind;
                }
                if(i==size-1)
                {
                     right=curind;
                }
                if(node->left)
                {
                    q.push({node->left,2*curind+1});
                }
                if(node->right)
                {
                    q.push({node->right,2*curind+2});
                }
                
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};