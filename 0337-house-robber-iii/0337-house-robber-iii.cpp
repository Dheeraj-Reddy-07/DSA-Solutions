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
    unordered_map<TreeNode*,int> dp;
    int rob(TreeNode* root) {
        if(!root) return 0;
        if(dp.count(root)) return dp[root];
        int robroot = root->val;
        if(root->left){
            robroot+=rob(root->left->left)+rob(root->left->right);
        }
        if(root->right){
            robroot+=rob(root->right->left)+rob(root->right->right);
        }
        int skiproot = rob(root->left)+rob(root->right);
        return dp[root] = max(robroot,skiproot);
    }
};