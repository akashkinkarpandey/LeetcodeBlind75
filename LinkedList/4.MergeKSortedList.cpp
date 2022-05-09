class cmp{
    public:
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *dummy=new ListNode(-1);
        ListNode* tail=dummy;
        priority_queue<ListNode*,vector<ListNode*>,cmp>q;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL)
                q.push(lists[i]);
        }
        while(q.size())
        {
            ListNode *t=q.top();
            q.pop();
            tail->next=t;
            tail=tail->next;
            if(t->next)
            q.push(t->next);

        }
        return dummy->next;
    }
};
