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
    int helper(TreeNode* root , int count){
        if(root == NULL){
            return count;
        }
        count++;
        if(root->left == NULL and root->right != NULL){
            int ans1 = helper(root->right , count);
            return ans1;
        }
        else if(root->left != NULL and root->right == NULL){
            int ans2 = helper(root->left , count);
            return ans2;
        }
    
            int ans1 = helper(root->left , count);
            int ans2 = helper(root->right , count);
            if(ans1 >= ans2){
                return ans2;
            }
            return ans1;  
    }
public:
    int minDepth(TreeNode* root) {
        return helper(root , 0);
    }
};