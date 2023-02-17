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
    void inorder(TreeNode* root, vector<int> &ans){
        if(root == NULL){
            return;
        }
        inorder(root->left , ans);
        ans.push_back(root->val);
        inorder(root->right , ans);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        inorder(root , ans);
        unordered_map<int , int>mp;
        for(int i : ans){
            mp[i]++;
        }
        vector<int>a;
        int f = INT_MIN;
        for(auto it: mp){
         if(it.second > f){
             f = it.second;
         }
        }
        for(auto it : mp){
            if(f == it.second){
                a.push_back(it.first);
            }
        }
        return a;
    }
};