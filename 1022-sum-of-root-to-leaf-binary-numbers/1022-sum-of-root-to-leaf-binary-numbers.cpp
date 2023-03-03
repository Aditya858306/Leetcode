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
    void helper(TreeNode* root, int s, long& ans){
        if(root == NULL){
            return;
        }
        s = s*2 + root->val;
        if(root->left == NULL and root->right == NULL){
            ans +=s;
            return;
        }
        helper(root->left,s,ans);
        helper(root->right,s,ans);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int s = 0;
        long ans = 0;
        helper(root, s , ans);
        return ans;
    }
};