/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int f(Node*root)
    {
        if(root==NULL)return 0 ;
        int val=0;
       for(auto it:root->children)
       {
           val=max(val,f(it));  
       }
        return val+1;
    }
    int maxDepth(Node* root) {
        return f(root);
    }
};