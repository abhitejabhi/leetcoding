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
    void dfs(TreeNode* root,int level,vector<int>&ans)
    {
        
        if(root==NULL)
        {
            return ;
        }
        if(level==ans.size())
        {
            ans.push_back(root->val);
        }
        dfs(root->right,level+1,ans);
        dfs(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        vector<int>ans;
        dfs(root,level,ans);
        return ans;
    }
};