#include <bits/stdc++.h>
// find length of loop 

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head==NULL || head->next==NULL) return 0;
    struct Node *slow=head, *fast= head, *t1=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast) return 0;
    while(t1!=slow)
    {
        t1=t1->next;
        slow=slow->next;
    }
    fast=slow;
    int count=0;
    while(fast->next!=slow)
    {
        count++;
        fast=fast->next;
    }
    
    return count+1;
    
}