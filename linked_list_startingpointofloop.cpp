//User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // we are using set to have unique values of addresses of nodes, 
        //if any of them repeats then we got the loop
    //     set<Node * > s;
    //     Node * ptr=head;
    //     while(ptr!=NULL)
    //     {
    //         if(s.find(ptr)!=s.end())
    //             return ptr->data;
    //         else
    //             s.insert(ptr);
    //         ptr=ptr->next;
    //     }
    // return -1;
    
    // using floyd cycle
        if(head==NULL || head->next==NULL) 
        return -1;
        Node * slow=head, *fast= head;
        while(fast && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(fast!=slow) return -1;
        else{
            fast=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
         
        }
        return slow->data;
    }
};