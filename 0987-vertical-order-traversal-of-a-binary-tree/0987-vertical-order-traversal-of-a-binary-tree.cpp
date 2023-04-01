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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mpp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode*temp=p.first;
            int x=p.second.first;
            int y=p.second.second;
            mpp[x][y].insert(temp->val);
            if(temp->left!=NULL)
            {
                q.push({temp->left,{x-1,y+1}});
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,{x+1,y+1}});
            }
            
        }
        for(auto p:mpp)
        {
            vector<int>col;
            for(auto q:p.second)
            {
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};