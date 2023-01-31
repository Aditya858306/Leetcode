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
    bool helper(TreeNode* root1 , TreeNode* root2){
        if(root1 == NULL and root2 == NULL){
            return true;
        }
        if(root1 != NULL and root2 == NULL){
            return false;
        }
        if(root1 == NULL and root2 != NULL){
            return false;
        }
        bool ans1 = helper(root1->left , root2->right);
        bool ans2 = helper(root1->right , root2->left);
        bool ans3 = root1->val == root2 ->val;
        
        if(ans1 and ans2 and ans3){
            return true;
        }
        else{
            return false;
        }
        
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        return helper(root->left , root->right);
        
        
    }
};