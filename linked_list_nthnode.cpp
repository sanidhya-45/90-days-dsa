//Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       if(head==NULL)
        return -1;
       int count=0;
       Node *ptr=head;
       
       while(ptr!=NULL)
        {
            count++; ptr=ptr->next;
        }
       if(n> count) return -1;
       else{
           int k= count-n+1;
           ptr=head;
           while(k!=1 && ptr!=NULL)
           {
               ptr=ptr->next;
               k--;
           }
           
       }
       return ptr->data;
        
}

