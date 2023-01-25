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
    void createmapping(vector<int> inorder , map<int , int>& nodetoIndex , int n)     {
       for(int i = 0; i<n;i++){
           nodetoIndex[inorder[i]] = i;
       } 
    }
    
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder , int &index , int start , int end , int n , map<int , int>& nodetoIndex  ){
        
        if(index < 0 || start > end){
            return NULL;
        }
        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int pos = nodetoIndex[element];
        root->right  = solve(inorder , postorder , index , pos+1 , end , n , nodetoIndex);
        root->left  = solve(inorder , postorder , index , start , pos-1 , n , nodetoIndex);
        
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int postorderindex = n-1;
        
        map<int , int>nodetoIndex;
        
        createmapping(inorder , nodetoIndex , n);
        TreeNode* ans = solve(inorder , postorder , postorderindex , 0 , n-1 , n , nodetoIndex);
        return ans;
        
    }
};