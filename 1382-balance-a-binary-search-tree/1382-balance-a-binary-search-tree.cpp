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
    void inorder(TreeNode* root, vector<int> &inorderval){
        if(root == NULL){
            return;
        }
        
        inorder(root->left , inorderval);
        inorderval.push_back(root->val);
        inorder(root->right , inorderval);
    }
    
    TreeNode* inordertoBST(int s , int e , vector<int>in){
        if(s>e){
            return NULL;
        }
        int mid = s + (e-s)/2;
        TreeNode* main = new TreeNode(in[mid]);
        main->left = inordertoBST(s , mid-1 , in);
        main->right = inordertoBST(mid+1 , e , in);
        return main;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>inorderval;
        inorder(root , inorderval);
        return inordertoBST(0, inorderval.size()-1, inorderval);
    }
};