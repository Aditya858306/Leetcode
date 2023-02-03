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
    pair<bool , int> helper(TreeNode* root){
        if(root == NULL){
            pair<bool , int>p = make_pair(true, 0);
            return p;
        }
        
        pair<bool , int>ans1 = helper(root->left);
        pair<bool , int>ans2 = helper(root->right);
        
        bool a1 = ans1.first;
        bool a2 = ans2.first;
        
        bool diff = abs(ans1.second - ans2.second) <= 1;
        
        pair<bool , int>ans;
        ans.second = max(ans1.second , ans2.second) + 1;
        
        if(a1 and a2 and diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        return helper(root).first;
    }
};