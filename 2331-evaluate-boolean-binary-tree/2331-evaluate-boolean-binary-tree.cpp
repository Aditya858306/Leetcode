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
    bool evaluateTree(TreeNode* root) {
        if(root->left ==  NULL and root->right == NULL){
            if(root->val == 0){
                return false;
            }
            if(root->val == 1){
                return true;
            }
        }
        bool ans1 = evaluateTree(root->left);
        bool ans2 = evaluateTree(root->right);
        
        if(root->val == 3){
            return ans1 and ans2;
        }
        return ans1 or ans2;
    }
};