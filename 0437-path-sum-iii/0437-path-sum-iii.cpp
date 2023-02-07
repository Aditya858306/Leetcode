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
    void helper(TreeNode* root, int ts , vector<int>path , int& count){
        if(root == NULL){
            return;
        }
        
        path.push_back(root->val);
        helper(root->left, ts, path , count);
        helper(root->right, ts, path , count);
        
        int size = path.size();
        long long int sum = 0;
        for(int i = size - 1; i>=0 ; i--){
            sum += path[i];
            if(sum == ts){
                count++;
            }
        }
        path.pop_back();
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int count = 0;
        helper(root , targetSum , path ,count);
        return count;
    }
};