class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
       if(x==1){

        head_ref=head_ref->next;

        return head_ref;

    }

    Node*curr=head_ref;

    int c=1;

    while(curr->next&&curr->next->next){

        c++;

        if(c==x){

            Node*temp=curr->next;

            curr->next=curr->next->next;

            delete(temp);

        }

        curr=curr->next;

    }

    if(c+1==x){

         Node*temp=curr->next;

            curr->next=curr->next->next;

            delete(temp);

    }

    return head_ref;
    }
};