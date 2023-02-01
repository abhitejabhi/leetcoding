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
        map<int ,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        q.push({root,{0,0}});
        while(!q.empty())
        {   int size=q.size();
            auto p=q.front();
           int x=p.second.first;
           int y=p.second.second;
            q.pop();
           if(p.first->left)
           {
               q.push({p.first->left,{x-1,y+1}});
           }if(p.first->right)
           {
               q.push({p.first->right,{x+1,y+1}});
           }
           mp[x][y].insert(p.first->val);      
        }
        for(auto p:mp)
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