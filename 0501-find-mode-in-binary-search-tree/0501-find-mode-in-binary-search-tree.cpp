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
    void f(TreeNode* root,map<int,int>&mp)
    {
        if(root==NULL)
        {
            return ;
        }
        f(root->left,mp);
        mp[root->val]++;
        f(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        map<int,int>mp;
        f(root,mp);
        int cnt=INT_MIN;
        int res=0;
        for(auto it:mp)
        {
            if(it.second==cnt)
            {
               
                ans.push_back(it.first);
               
            }
            if(it.second>cnt)
            {
                ans.clear();
                cnt=it.second;
                ans.push_back(it.first);
            }
        }
        return ans;
       
        
    }
};