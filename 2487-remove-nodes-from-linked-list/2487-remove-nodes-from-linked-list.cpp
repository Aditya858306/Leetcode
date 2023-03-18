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
    ListNode* removeNodes(ListNode* head) {
        stack<int>s;
        while(head != NULL){
            s.push(head->val);
            head = head->next;
        }
        int max = s.top();
        s.pop();
        ListNode* temp = new ListNode(max);
        while(!s.empty()){
            if(max <= s.top()){
                max = s.top();
                ListNode* temp1 = new ListNode(max);
                temp1->next = temp;
                temp = temp1;
                s.pop();
            }
            else{
                s.pop();
            }
        }
        return temp;
    }
};