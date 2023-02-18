// Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

#include <bits/stdc++.h>
//User function template for C++


struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL) return 0;
        if(head->next==NULL) return 0;
        
        Node * slow=head, *fast=head->next->next;
        while(fast!=NULL && fast->next !=NULL)
        {
            if(slow==fast)
                return true;
            slow=slow->next;
            fast=fast->next->next;
        }
       return false; 
    }
};