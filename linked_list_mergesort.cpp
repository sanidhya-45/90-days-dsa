/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/
//Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
//Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL)
            return head;
        // your code here
        vector<int> v;
        Node * ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->data);
            ptr=ptr->next;
        }
        sort(v.begin(), v.end());
        ptr=head;
        for(int i=0;i<v.size();i++)
        {
            ptr->data=v[i];
            ptr=ptr->next;
        }
    return head;
    }
};