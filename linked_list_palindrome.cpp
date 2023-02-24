/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// check if given linked list is palindrome or not

class Solution{
    private:

    Node* findMiddle(Node* head){

        Node* slow = head;

        Node* fast = head->next;

        while(fast!=NULL && fast->next!=NULL){

            fast = fast->next->next;

            slow = slow->next;

        }

        return slow;

    }

    

    Node* reverseList(Node* pos){

        Node* prev = NULL;

        Node* curr = pos;

        Node* next = NULL;

        

        while(curr!=NULL){

            next = curr->next;

            curr->next = prev;

            prev = curr;

            curr = next;

        }

        return prev;

    }

  public:

    //Function to check whether the list is palindrome.

    bool isPalindrome(Node *head)

    {

        //Your code here

        Node* middle = findMiddle(head);

        middle->next = reverseList(middle->next);

        

        Node* head1 = head;

        Node* head2 = middle->next;

        

        while(head2!= NULL){

            if(head1->data != head2->data) return false;

            head2 = head2->next;

            head1 = head1->next;

        }

        return true;
    }
};

        //Your code here
        // brute force
        // if(head==NULL) return 0;
        // if(head->next==NULL) return 1;
        // Node *ct=head; int count=0;
        // while(ct!=NULL)
        //     {count++;
        //     ct=ct->next;
        //     }
        // int k=count/2;
        // while(k>0)
        // {
        //     Node *ptr=head, *newnode=head;
        //     while(ptr->next!=NULL)
        //     {
        //             newnode = ptr;
        //             ptr=ptr->next;
        //     }
    
        //     if(head->data==ptr->data)
        //       {
        //           newnode->next=NULL;
        //           head=head->next;
        //           k--;
        //       }
        //     else return 0;
        // }
        // return 1;