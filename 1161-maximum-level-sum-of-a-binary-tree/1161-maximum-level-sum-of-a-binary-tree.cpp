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
public:
    int maxLevelSum(TreeNode* root) {\
        if(root==NULL)
        {
            return 0;
        }
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        int ans=0;
        int maxsum=INT_MIN;
        while(!q.empty())
        {
            int size=q.size();
            sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                sum=sum+temp->val;
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
            level++;
            if(sum>maxsum)
            {
                maxsum=sum;
                ans=level;
            }
        }
        return ans;
    }
};