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
    void createmapping(vector<int>& postorder ,map<int, int>& nodetoindex, int n){
        for(int i = 0; i < n; i++){
            nodetoindex[postorder[i]] = i;
        }
    }
    
    TreeNode* solve(vector<int>& preorder,vector<int>& postorder, int& idx , int s , int e, int n ,map<int, int>& nodetoindex){
        if(s > e ){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;
        if(idx >= n || s == e)
            return root;
        int pos = nodetoindex[preorder[idx]];
        
        root->left = solve(preorder, postorder, idx, s , pos, n, nodetoindex);
        root->right = solve(preorder, postorder, idx, pos+1 , e-1, n, nodetoindex);
        
        return root;
        
        
    }
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int preorderidx = 0;
        map<int, int>nodetoindex;
        int n = preorder.size();
        createmapping(postorder , nodetoindex , n);
        TreeNode* root = solve(preorder, postorder , preorderidx , 0, n-1, n , nodetoindex);
        return root;
    }
};