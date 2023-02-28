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
    void inorder(TreeNode* root, vector<int>& ans){
        if(root == NULL){
            return;
        }
        
        inorder(root->left ,ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
        int min = INT_MAX;
        for(int i = 0; i<ans.size()-1; i++){
            int diff = ans[i+1] - ans[i];
            if(diff<min){
                min = diff;
            }
        }
        return min;
    }
};