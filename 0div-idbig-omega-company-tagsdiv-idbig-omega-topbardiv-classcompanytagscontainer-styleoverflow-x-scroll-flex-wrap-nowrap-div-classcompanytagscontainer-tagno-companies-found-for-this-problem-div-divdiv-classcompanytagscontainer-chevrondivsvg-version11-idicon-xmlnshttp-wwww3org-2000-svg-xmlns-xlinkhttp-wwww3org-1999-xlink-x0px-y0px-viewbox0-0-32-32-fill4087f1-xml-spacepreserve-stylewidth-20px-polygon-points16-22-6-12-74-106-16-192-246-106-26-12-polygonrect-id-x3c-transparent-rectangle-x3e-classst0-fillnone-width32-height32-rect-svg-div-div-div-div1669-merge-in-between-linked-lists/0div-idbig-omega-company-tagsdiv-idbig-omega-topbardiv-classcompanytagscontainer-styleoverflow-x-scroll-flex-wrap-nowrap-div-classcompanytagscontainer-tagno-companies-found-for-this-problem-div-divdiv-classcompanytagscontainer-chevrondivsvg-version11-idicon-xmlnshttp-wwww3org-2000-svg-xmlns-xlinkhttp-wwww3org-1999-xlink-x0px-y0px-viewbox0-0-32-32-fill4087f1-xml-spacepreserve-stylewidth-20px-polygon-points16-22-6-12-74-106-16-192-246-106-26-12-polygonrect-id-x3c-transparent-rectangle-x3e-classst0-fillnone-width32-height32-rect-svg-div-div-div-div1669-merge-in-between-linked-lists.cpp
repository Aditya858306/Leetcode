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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        int count = 0;
        
        while(count < a-1){
            curr = curr->next;
            count++;
        }
        
        ListNode* forward = curr->next;
        
        curr->next = list2;
        
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        int d = b-a;
        
        while(d--){
            forward = forward->next;
        }
        
        curr->next = forward->next;
        return list1;
    }
};