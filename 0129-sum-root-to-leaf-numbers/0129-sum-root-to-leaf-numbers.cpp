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
    int helper(TreeNode* root , int sum){
        if(root == NULL){
            return 0;
        }
        sum = sum*10 + root->val;
        if(root->left == NULL and root->right == NULL){
            return sum;
        }        
        int ans1 = helper(root->left , sum);
        int ans2 = helper(root->right , sum);
        
        int s = ans1 + ans2;
        return s;
    }
public:
    int sumNumbers(TreeNode* root) {
        return helper(root , 0);
    }
};