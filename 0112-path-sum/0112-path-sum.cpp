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
private:
    bool helper(TreeNode* root, int ts , int s){
        if(root == NULL){
            return false;
        }
        
        s = s + root->val;
        
        if(root->left == NULL and root->right == NULL and s == ts){
            return true;
        }
        
        return helper(root->left , ts , s) || helper(root->right, ts , s);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s = 0;
        bool flag = helper(root , targetSum , s);
        return flag;
    }
};