
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * reverse(Node * head)
    {
        Node * curr= head, * forw=head, * prev= NULL;
        while(forw!=NULL)
        {
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    
    void print(Node * head)
    {
        Node * ptr= head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ->";
            ptr=ptr->next;
        }
    }
    
    Node* addOne(Node *head) 
    {
        head= reverse(head);
                // cout<<"hi";
        // print(head);
        Node *ptr=head;
        Node *temp= ptr;
        int c=0;
        while(ptr!=NULL)
        {
            if(ptr->data  <9)
            {
                ptr->data++;
                c=0;
                break;
            }
            else{
                ptr->data=0;
                temp=ptr;
                ptr=ptr->next;
                c=1;
            }
        }
        
        if(c==1)
        {
            Node *newnode= new Node(1);
            temp->next=newnode;
        }
        
        head= reverse(head);
        // print(head);
        return head;
    }
};
