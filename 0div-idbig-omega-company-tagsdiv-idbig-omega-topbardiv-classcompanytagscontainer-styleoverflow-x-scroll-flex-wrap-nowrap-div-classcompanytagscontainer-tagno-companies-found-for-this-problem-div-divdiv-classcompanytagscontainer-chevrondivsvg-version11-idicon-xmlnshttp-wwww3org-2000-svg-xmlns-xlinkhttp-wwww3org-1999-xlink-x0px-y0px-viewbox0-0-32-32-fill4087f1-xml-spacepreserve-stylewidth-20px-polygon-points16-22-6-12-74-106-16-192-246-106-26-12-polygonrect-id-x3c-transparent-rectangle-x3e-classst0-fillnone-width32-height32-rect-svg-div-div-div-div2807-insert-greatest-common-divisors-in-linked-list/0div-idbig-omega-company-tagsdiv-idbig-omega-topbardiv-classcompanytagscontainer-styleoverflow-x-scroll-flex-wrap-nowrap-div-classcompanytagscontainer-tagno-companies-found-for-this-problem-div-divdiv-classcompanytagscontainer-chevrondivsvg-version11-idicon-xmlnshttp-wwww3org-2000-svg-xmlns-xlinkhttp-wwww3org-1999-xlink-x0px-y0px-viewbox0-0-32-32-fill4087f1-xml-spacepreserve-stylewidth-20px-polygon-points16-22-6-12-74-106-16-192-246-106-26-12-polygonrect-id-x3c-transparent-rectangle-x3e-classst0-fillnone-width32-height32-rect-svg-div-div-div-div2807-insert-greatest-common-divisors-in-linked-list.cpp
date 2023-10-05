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
    
    int helper(int a, int b){
        int n = a > b ? b : a;
        int gcd = 0;
        for(int i = 1; i <= n ; i++){
            if(a % i == 0 and b % i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr != NULL and curr->next!= NULL){
            int a = curr->val;
            int b = curr->next->val;
            
            int gcd = helper(a,b);
            ListNode* temp = new ListNode(gcd);
            ListNode* forward = curr->next;
            curr->next= temp;
            temp->next = forward;
            curr = curr->next->next;
        }
        return head;
    }
};






