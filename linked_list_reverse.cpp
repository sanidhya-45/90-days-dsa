// Given a linked list of N nodes. The task is to reverse this list.

// Linked List Node structure:
#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
}

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head== NULL || head->next == NULL)
            return head;
        Node *curr =NULL, *prev =head, *ptr=head->next;
        
        while(ptr!=NULL)
        {
            prev->next= curr;
            curr= prev;
            prev = ptr;
            ptr=ptr-> next;
        }
        prev->next=curr;
    return prev;
    }
    
};
    