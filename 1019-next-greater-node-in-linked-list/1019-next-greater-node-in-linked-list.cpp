/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>s;
        s.push(0);
        
        vector<int>ans;
        
        ListNode* temp = head;
        
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        // vector<int>a(n);
        for(int i = n-1; i>=0; i--){
            int num = ans[i];
            
            while(s.top() != 0 and s.top() <= num){
                s.pop();
            }
            
            ans[i] = s.top();
            s.push(num);
        }
        
        return ans;
        
    }
};