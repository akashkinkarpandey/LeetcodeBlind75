class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val>l2->val)
            swap(l1,l2);
        ListNode *t=l1;
        while(l1 and l2)
        {
            ListNode *temp;
            while(l1 and l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return t;
    }
};
