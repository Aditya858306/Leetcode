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
    TreeNode* helper(int s , int e , vector<int>& nums){
        if(s>e || nums.size() == 0){
            return NULL;
        }
        int mid = s + (e-s)/2;
        int ele = nums[mid];
        TreeNode* root = new TreeNode(ele);
        root->left = helper(s , mid - 1 , nums);
        root->right = helper(mid+1 , e , nums);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0 , nums.size()-1 , nums);
    }
};