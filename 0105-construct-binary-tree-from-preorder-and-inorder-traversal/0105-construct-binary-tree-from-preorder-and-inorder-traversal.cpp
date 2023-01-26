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
    
    TreeNode* solve( vector<int>& preorder , vector<int>& inorder , int &index , int start , int end , int n , map<int , int>& nodetoIndex  ){
        
        if(index >= n || start > end){
            return NULL;
        }
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int pos = nodetoIndex[element];
         root->left  = solve(preorder , inorder , index , start , pos-1 , n , nodetoIndex);
        root->right  = solve(preorder , inorder , index , pos+1 , end , n , nodetoIndex);
       
        
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preorderindex = 0;
        
        map<int , int>nodetoIndex;
        
        createmapping(inorder , nodetoIndex , n);
        TreeNode* ans = solve( preorder, inorder , preorderindex , 0 , n-1 , n , nodetoIndex);
        return ans;
    }
};