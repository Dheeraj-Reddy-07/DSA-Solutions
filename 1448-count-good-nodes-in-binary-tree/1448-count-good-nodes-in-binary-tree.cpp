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
    int dfs(TreeNode* root, int maxsofar){
        if(!root) return 0;
        int good =0;
        if(root->val>=maxsofar) good++;
        maxsofar = max(maxsofar,root->val);
        good+=dfs(root->left,maxsofar);
        good+=dfs(root->right,maxsofar);
        return good;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};