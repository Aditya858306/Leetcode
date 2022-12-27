/*class Solution
{
    int findl(ListNode *l1)
    {
        ListNode *temp = l1;
        int l = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            l++;
        }
        return l;
    }

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int a = findl(l1);
        int b = findl(l2);
        int l = 0;
        int f = 0;
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        if (a > b)
        {
            l = b;
            f = 1;
        }
        else if (b > a)
        {
            l = a;
        }
        else
        {
            f = -1;
            l = a;
        }
        int carry = 0;
        int i = 0;
        for (; i < l; i++)
        {
            int sum = carry + l1->val + l2->val;
            int val2 = 0;
            if (sum >= 10)
            {
                carry = 1;
                val2 = sum - 10;
            }
            else
            {
                carry = 0;
                val2 = sum;
            }
            if (f == 1 || f == -1)
            {
                l1->val = val2;
            }
            else if (f == 0)
            {
                l2->val = val2;
            }
            if (f == -1 && i == l - 1 && carry == 1)
            {
                ListNode *extra = new ListNode(carry);
                l1->next = extra;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (f == 1)
        {
            while (i < a)
            {
                int sum = carry + l1->val;
                int val2 = 0;
                if (sum >= 10)
                {
                    carry = 1;
                    val2 = sum - 10;
                }
                else
                {
                    carry = 0;
                    val2 = sum;
                }
                l1->val = val2;
                i++;
                if (i == a && carry == 1)
                {
                    ListNode *extra = new ListNode(carry);
                    l1->next = extra;
                }
                else
                {
                    l1 = l1->next;
                }
            }
        }
        else if (f == 0)
        {
            while (i < b)
            {
                int sum = carry + l2->val;
                int val2 = 0;
                if (sum >= 10)
                {
                    carry = 1;
                    val2 = sum - 10;
                }
                else
                {
                    carry = 0;
                    val2 = sum;
                }
                l2->val = val2;
                i++;
                if (i == b && carry == 1)
                {
                    ListNode *extra = new ListNode(carry);
                    l2->next = extra;
                }
                else
                {
                    l2 = l2->next;
                }
            }
        }

        if (f == 1 || f == -1)
        {
            return head1;
        }
        return head2;
    }
};*/