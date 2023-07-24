#include <vector>
#include <string>
using namespace std;

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
    void f(TreeNode* root, vector<string>& ans, string& temp) {
        if (root == nullptr) {
            return;
        }

        // Add the current node value to the path
        if (!temp.empty()) {
            temp += "->";
        }
        temp += to_string(root->val);

        if (root->left == nullptr && root->right == nullptr) {
            // Reached a leaf node, add the path to the answer
            ans.push_back(temp);
        } else {
            // Continue exploring the left and right subtrees
            f(root->left, ans, temp);
            f(root->right, ans, temp);
        }

        // Backtrack by removing the current node value from the path
        int len = to_string(root->val).length();
        if (!temp.empty()) {
            temp.erase(temp.length() - len); // Remove the last part of the path
            if (!temp.empty()) {
                temp.erase(temp.length() - 2); // Remove "->" separator
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp = "";
        f(root, ans, temp);
        return ans;
    }
};
