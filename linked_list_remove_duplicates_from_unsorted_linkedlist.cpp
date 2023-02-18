// Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed

// The structure of linked list is the following
#include <bits/stdc++.h>

struct Node {
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
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head==NULL || head->next==NULL) return head;
     set<int> s;
     Node *ptr=head, *temp=head;
     while(ptr!=NULL)
     {
         if(s.find(ptr->data)!=s.end())
         {
             temp->next=ptr->next;
             ptr=ptr->next;
         }
         else 
        { s.insert(ptr->data);
        temp=ptr;
        ptr=ptr->next;
            
        }
     }
     return head;
    }
};