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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = new ListNode(-1);
        ListNode* ans = temp;
        int sum = 0;
        int count = 0;
        while(curr != NULL){
            if(curr->val == 0){
                count++;
                if(count == 2){
                    if(sum != 0){
                        ListNode* newNode= new ListNode(sum);
                        temp->next = newNode;
                        temp = temp->next;
                        sum = 0;
                    }
                    count = count-1;   
                }
            }
            else{
                sum += curr->val;
            }
            curr = curr->next;
        }
        return ans->next;
    }
};