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
    void dfs(TreeNode* root, int &sum, string &s){
        if(!root)return;
        s.push_back(root->val + '0');
        if(!root->left&& !root->right){
            sum+=stoi(s,nullptr,2);
        }
        else{
            dfs(root->left, sum, s);
            dfs(root->right, sum, s);
        }
        s.pop_back();
        return;
}
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        string s = "";
        dfs(root, sum, s);
        return sum;
    }
};