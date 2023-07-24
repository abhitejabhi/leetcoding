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
    int min=INT_MAX;
    int min1=INT_MAX;
    void f(TreeNode* root,set<int>&s)
    {
        if(root==NULL)
        {
            return ;
        }
        f(root->left,s);
        s.insert(root->val);
        f(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        f(root,s);
        if(s.size()==1)return -1;
        auto it=s.begin();
        it++;
        return *it;
        
    }
};