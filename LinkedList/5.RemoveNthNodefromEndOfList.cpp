class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode * start = new ListNode(-1);
        start->next=head;
        ListNode *slow=start,*fast=start;
        int k=n;
        while(k--)
        {
            fast=fast->next;
        }
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return start->next;
    }
};
