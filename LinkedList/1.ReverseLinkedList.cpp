//way 1
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
        {
            return head;
        }
        ListNode *t=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return t;
    }
};
//way 2
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*curr=head,*nex;
        while(curr)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;

        }
        head=prev;
        return head;
    }
};
