#include <bits/stdc++.h>
//Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
//Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(head==NULL || head->next==NULL) return head;
    int k;
    Node *ptr =head;
    while(ptr!=NULL && ptr->next!=NULL)
    {
        if(ptr->data==ptr->next->data)
        {
            ptr->next=ptr->next->next;
            continue;
        }
        ptr=ptr->next;
    }
    return head;
}