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
    void helper(TreeNode* root , string& s , int l , int a){
        if(root == NULL){
            if(a==0){
                s+= "()";
            }
            
            return;
        }
        s = s + "(" + to_string(root->val);
        if(root->left == NULL and root->right == NULL){
            s+=  ")";
            return;
        }
        helper(root->left , s , l+1 , 0);
        helper(root->right , s , l+1 , 1);
        
        s += ")";
        return;
        
        
    }
public:
    string tree2str(TreeNode* root) {
        string s = "" + to_string(root->val);
        if(root->left == NULL and root->right == NULL){
            return s;
        }
        string s1 = "";
        string s2 = "";
        int l = 0;
        helper(root->left , s1 , 1 , 0);
        helper(root->right , s2 , 1 , 1);
        
        return s+s1+s2;
        
    }
};