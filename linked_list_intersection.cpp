

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
// Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with its own memory the original lists should not be changed.
// Note: The linked list elements are not necessarily distinct.
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *newlist= new Node(0);
    Node *ans= newlist;
    Node *ptr1=head1, *ptr2=head2;
        
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data == ptr2->data)
        {
            Node *newnode= new Node(ptr1->data);
            ans->next= newnode;
            ans= ans->next;
            ptr1= ptr1->next;
            ptr2= ptr2->next;
        }
        else if(ptr1->data < ptr2->data)
            ptr1= ptr1->next;
        else 
            ptr2= ptr2->next;
        
    }
    return newlist->next;
    
}