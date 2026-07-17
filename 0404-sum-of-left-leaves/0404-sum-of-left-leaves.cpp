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
    void dfs(TreeNode* node, bool isleft, int &sum){
        if(!node) return;
        if(!node->left && !node->right){
        if(isleft) sum+=node->val;
        return;
        }
        dfs(node->left,true,sum);
        dfs(node->right, false,sum);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        bool isleft = false;
        dfs(root,isleft,sum);
        return sum;
    }
};