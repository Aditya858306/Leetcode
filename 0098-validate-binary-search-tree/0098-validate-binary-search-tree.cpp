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
    bool helper(TreeNode* root ,  TreeNode* min , TreeNode* max)
    {
        if(root == NULL){
            return true;
        }
        if(min != NULL && root->val <= min->val){
            return false;
        }
        if(max != NULL && root->val >= max->val){
            return false;
        }
        
        bool leftValid = helper(root->left, min, root);
        bool rightValid = helper(root->right,root, max);
        
        return leftValid && rightValid;
    }
public:
    bool isValidBST(TreeNode* root) {
        
        TreeNode* min = NULL, *max = NULL;
        return helper(root , min , max);
        
    }
};