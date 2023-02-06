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
    void helper(TreeNode* root , int &sum , int i){
        if(root == NULL){
            return ;
        }
        
        if(root->left == NULL and root->right == NULL){
            sum = sum + root->val*i;
        }
        
        helper(root->left , sum , 1);
        helper(root->right , sum , 0);
        
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        helper(root , sum ,0);
        return sum;
    }
};