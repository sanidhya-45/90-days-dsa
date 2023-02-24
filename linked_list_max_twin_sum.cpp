class Solution {
public:

    ListNode *reverse(ListNode *head)
    {
        ListNode *prev=NULL, *curr=head, * forw=NULL;

        while(curr!=NULL)
        {
            forw= curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    ListNode *getmid(ListNode *head)
    {
        ListNode *slow=head, *fast=head->next;

        while(fast->next!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    int pairSum(ListNode* head) {
        ListNode *middle=getmid(head);
        middle->next= reverse(middle->next);
        ListNode *t1=head, *t2=middle->next;
        int sum=0,maxnum=-999;
        while(t1!=NULL && t2!=NULL)
        {
            sum =t1->val +t2->val;
            if(sum>maxnum)
                maxnum=sum;
            t1=t1->next;
            t2=t2->next;
        }
        return maxnum;
    }
};