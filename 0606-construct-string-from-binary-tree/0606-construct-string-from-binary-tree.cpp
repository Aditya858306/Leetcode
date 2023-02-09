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
    void helper(TreeNode* root , string& ans){
        if (!root) return;   
        ans += to_string(root->val);
        if (root->left) { //left side check
            ans += '(';
            helper(root->left, ans);
            ans += ')';
        }
        if (root->right) { //right side check
            if (!root->left) ans += "()"; //left side not present, but right side present
            ans += '(';
            helper(root->right, ans);
            ans += ')';
        }
    }
//     void helper(TreeNode* root , string& s , int l , int a){
//         if(root == NULL){
//             if(a==0){
//                 s+= "()";
//             }
            
//             return;
//         }
//         s = s + "(" + to_string(root->val);
//         if(root->left == NULL and root->right == NULL){
//             s+=  ")";
//             return;
//         }
//         helper(root->left , s , l+1 , 0);
//         helper(root->right , s , l+1 , 1);
        
//         s += ")";
//         return;
         
//     }
    //approch 2
//     void helper(TreeNode* root , string& s , int l){
//         if(root == NULL){
//             return;
//         }
//         else if(root->left == NULL and root->right == NULL){
//             s = s + "(" + to_string(root->val) + ")";
//             return;
//         }
//         else if(root->left != NULL and root->right == NULL){
//             if(l!=0){
//                 s = s + "(" + to_string(root->val);
//             }
//             helper(root->left, s , l+1);
//             if(l != 0){
//                 s += ")";
//             }
            
//         }
//         else if(root->left == NULL and root->right != NULL){
//             if(l == 0){
//                 s += "()";
//             }
//             if(l != 0){
//                 s = s  + "(" + to_string(root->val) + "()";
//             }
//             helper(root->right , s, l+1);
//             if(l!=0){
//                 s += ")";
//             }
//         }
//         else{
//             if(l!=0){
//                 s = s + "(" + to_string(root->val);
//             }
            
//             helper(root->left, s , l+1);
//             helper(root->right, s , 1+1);
//             if(l!=0){
//                 s+=")";
//             }
//         }
//}
public:
    string tree2str(TreeNode* root) {
        string s;
        helper(root , s);
        return s;
        // string s1 = "";
        // string s2 = "";
        // int l = 0;
        // helper(root->left , s1 , 1 , 0);
        // helper(root->right , s2 , 1 , 1);
        // return s+s1+s2;
        
    }
};