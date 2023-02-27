/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node * reverse (Node * head)
    {
        Node *prev =NULL, *curr=head, *forw=NULL;
        
        while(curr!=NULL)
        {
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        Node * rev= reverse(head);
        Node *temp=rev;
        while(temp->next!=NULL)
        {
            if(temp->next->data < temp->data)
                temp->next= temp->next->next;
            else temp=temp->next;
        }
        Node *ans=reverse(rev);
        return ans;
    //  brute force way
    //     Node *ptr=head, * temp =ptr; // for first loop
    //     Node *ptr1= ptr; // for inside loop
    //     Node * h=NULL; // for new list
    //     Node *hd=h;
    //     int flag=0; // for condition
        
    //     while(ptr!=NULL)
    //     {
    //         flag=1;
    //         temp= ptr;
    //         ptr1=ptr->next;
    //         while(ptr1!=NULL)
    //         {
    //             if(ptr1->data > ptr->data)
    //             {
    //                 ptr=ptr->next;
    //                 delete(temp);
    //                 flag=0;
    //                 break;
                    
    //             }
    //             else ptr1=ptr1->next;
                
    //         }
    //         if(flag!=0)
    //         {
    //             if(h==NULL)
    //             {h=ptr;
    //             hd=ptr;}
    //             else{
    //                 h->next=ptr;
    //                 h=ptr;
    //             }
    //             ptr=ptr->next;
    //         }
            
    //     }
    // return hd;
    }
    
};
   