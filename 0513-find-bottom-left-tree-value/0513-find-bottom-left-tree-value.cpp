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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>ans;
        ans.push(root);
        
        while(!ans.empty()){
            root = ans.front();
            ans.pop();
            
            if(root->right){
                ans.push(root->right);
            }
            if(root->left){
                ans.push(root->left);
            }
            
        }
        return root->val;
    }
};