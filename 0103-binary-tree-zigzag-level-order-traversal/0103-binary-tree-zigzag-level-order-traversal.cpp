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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL)
        {
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++)
            {   
                TreeNode *node=q.front();
                q.pop();
                int index=0;
                if(flag)
                {
                    index=i;
                }else
                {
                    index=size-1-i;
                }
                v[index]=node->val;
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }if(node->right!=NULL)
                {
                    q.push(node->right);
                }
               
            }
             flag=!flag;
            result.push_back(v);
        }
        return result;
    }
};