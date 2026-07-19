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
    int dfs(TreeNode* root, int parent, int gp){
        if(!root) return 0;
        int sum  = 0;
        if(gp%2==0) sum+=root->val;
        int left = dfs(root->left, root->val, parent);
        int right = dfs(root->right, root->val, parent);
        return sum+left+right;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return dfs(root, 1,1);
    }
};