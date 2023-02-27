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
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right , ans);
    }
    
    void merge(vector<int>ans1, vector<int>ans2, vector<int>& result){
        int i = 0;
        int j = 0;
        int n = ans1.size();
        int m = ans2.size();
        while(i<n and j<m){
            if(ans1[i] < ans2[j]){
                result.push_back(ans1[i++]);
            }
            else if(ans1[i] > ans2[j]){
                result.push_back(ans2[j++]);
            }
            else{
                result.push_back(ans1[i++]);
                result.push_back(ans2[j++]);
            }
        }
        
        while(i<n){
            result.push_back(ans1[i++]);
        }
        
        while(j<m){
            result.push_back(ans2[j++]);
        }
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        inorder(root1,ans1);
        inorder(root2,ans2);
        
        vector<int> result;
        merge(ans1 , ans2 , result);
        return result;
    }
};