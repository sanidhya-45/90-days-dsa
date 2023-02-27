/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
// sort linked lists of 0's 1's and 2's
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        if(head==NULL || head->next==NULL) return head;
        // Add code here 
        // in-place sort
        Node * zero= NULL;
        Node * one= NULL;
        Node * two= NULL;
        Node * zhd=zero;
        Node * ohd= one;
        Node * thd= two;
        
        Node * curr=head;
        while(curr)
        {
            if(curr->data==0)
            {
                if(zero==NULL)
                {
                    zero=curr;
                    zhd=curr;
                }
                else{
                    zero->next= curr;
                    zero=curr;
                }
            }
            if(curr->data==1)
            {
                if(one==NULL)
                {
                    one=curr;
                    ohd=curr;
                }
                else{
                    one->next= curr;
                    one=curr;
                }
            }
            if(curr->data==2)
            {
                if(two==NULL)
                {
                    two=curr;
                    thd=curr;
                }
                else{
                    two->next= curr;
                    two=curr;
                }
            }
            curr=curr-> next;
            
        }
        if(two!=NULL)
            two->next=NULL;
            
        if(zero!=NULL)
        {
            if(one!=NULL)
            {
                zero->next= ohd;
                one->next=thd;
                return zhd;
            }
            else{
                zero->next= thd;
                return zhd;
            }
        }
        else{
            if(one!=NULL)
            {
                one->next= thd;
                return ohd;
            }
            else{
                return thd;
            }
        }
        
        
        
        
         // basic method
         
    //      Node * dummy = new Node(1), *ptr=head;
    //      Node * ans=dummy;
    //      while(ptr!=NULL)
    //      {
    //          if(ptr->data==0)
    //          {
    //              Node * newnode= new Node(0);
    //              ans->next= newnode;
    //              ans=ans->next;
    //          }
    //          ptr=ptr->next;
    //      }
    //      ptr=head;
    //      while(ptr!=NULL)
    //      {
    //          if(ptr->data==1)
    //          {
    //              Node * newnode= new Node(1);
    //              ans->next= newnode;
    //              ans=ans->next;
    //          }
    //          ptr=ptr->next;
    //      }
    //      ptr=head;
    //      while(ptr!=NULL)
    //      {
    //          if(ptr->data==2)
    //          {
    //              Node * newnode= new Node(2);
    //              ans->next= newnode;
    //              ans=ans->next;
    //          }
    //          ptr=ptr->next;
    //      }
         
    //   return dummy->next;  
    }
};