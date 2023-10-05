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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* nxt, *prev = NULL;
        while(slow) {
            nxt = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nxt;
        }

        int maxSum = 0;
        ListNode* temp = head;
        while(prev) {
            maxSum = max(maxSum, temp->val + prev->val);
            temp = temp->next;
            prev = prev->next;
        }
        return maxSum;
    }
};