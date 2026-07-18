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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        bool foundEmpty = false;

        q.push(root);

        while(!q.empty()){
            auto node = q.front(); 
            q.pop();

            if(node->left){ 
                if(foundEmpty) return false;
                q.push(node->left);
            }
            else  foundEmpty = true;

            if(node->right){ 
                if(foundEmpty) return false;
                q.push(node->right);
            }
            else foundEmpty = true;
        }
        
        return true;
    }
};