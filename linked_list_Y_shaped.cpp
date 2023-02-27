

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1== NULL || head2==NULL) return -1;
    int count1=0, count2=0;
    Node *ptr1=head1;
    Node *ptr2=head2;
    while(ptr1!=NULL)
    {
        count1++;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        count2++;
        ptr2=ptr2->next;
    }
    ptr1=head1;
    ptr2=head2;
    if(count1> count2)
    {
        int common= count1- count2;
        while(common--)
            ptr1= ptr1->next;
        
    }
    else{
        int common= count2-  count1;
        while(common--)
            ptr2= ptr2->next;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2) return ptr1->data;
        ptr1= ptr1->next;
        ptr2= ptr2->next;
    }
    return -1;
}