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
    void helper(TreeNode* root, vector<int>& leaf){
        if(root ==  NULL){
            return;
        }
        if(root->left == NULL and root->right == NULL){
            leaf.push_back(root->val);
            return;
        }
        helper(root->left, leaf);
        helper(root->right, leaf);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1;
        vector<int>leaf2;
        
        helper(root1, leaf1);
        helper(root2, leaf2);
        
        int i = 0;
        int n = max(leaf1.size(),leaf2.size());
        while(i<n){
            if(leaf1[i] != leaf2[i]){
                return false;
            }
            i++;
        }
        return true;
        
    }
};