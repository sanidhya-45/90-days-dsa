//Given a sorted doubly linked list and an element X, your need to insert the element X into correct position in the sorted DLL.

structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};

// function should insert a new node in sorted way in
// a sorted doubly linked list
//Return the head after insertion

Node* sortedInsert(Node * head, int x)
{
	// Code here
	Node *ptr=head, *temp=ptr;
	Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->data=x;
	while(ptr!=NULL)
	{
	    if(ptr->data<=x)
	        {temp=ptr;
	        ptr=ptr->next;}
	   else break;
	}
	if(ptr==head)
	{
	    
	    newnode->next=ptr;
	    ptr->prev=newnode;
	    newnode->prev=NULL;
	    return newnode;
	}
	else if(ptr==NULL)
	{

	    temp->next=newnode;
	    newnode->prev= temp;
	    newnode->next=NULL;
	    return head;
	}
	else{
	    
	    temp->next=newnode;
	    newnode->next=ptr;
	    newnode->prev=temp;
	    ptr->prev=newnode;
	}
	return head;
}