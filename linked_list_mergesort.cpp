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
// the idea is similar to that of merge sort of array
class Solution {
public:
 ListNode  *split(ListNode * head)
    {
        ListNode * slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
ListNode * merge(ListNode *firsthalf, ListNode *secondhalf)
    {
        ListNode *result=NULL;
        if(firsthalf==NULL)
            return secondhalf;
        if(secondhalf==NULL)
            return firsthalf;
        
        if(firsthalf->val <= secondhalf->val)
            {result=firsthalf;
            result->next=merge(firsthalf->next, secondhalf);
            }
        else 
        {
            result=secondhalf;
            result->next=merge(firsthalf, secondhalf->next);
        }
        return result;
    }
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL) return head;

        ListNode * firsthalf=split(head);
        ListNode * secondhalf= firsthalf->next;
        firsthalf->next = NULL;
        
        ListNode *left= sortList(head);
        ListNode *right =sortList(secondhalf);
        
        ListNode * head_ref= merge(left, right);
        
    return head_ref;
    }
};

// below solution is using a vector to sort the list
// class Solution{
//   public:
//     //Function to sort the given linked list using Merge Sort.
//     Node* mergeSort(Node* head) {
//         if(head==NULL || head->next==NULL)
//             return head;
//         // your code here
//         vector<int> v;
//         Node * ptr=head;
//         while(ptr!=NULL)
//         {
//             v.push_back(ptr->data);
//             ptr=ptr->next;
//         }
//         sort(v.begin(), v.end());
//         ptr=head;
//         for(int i=0;i<v.size();i++)
//         {
//             ptr->data=v[i];
//             ptr=ptr->next;
//         }
//     return head;
//     }
// };
