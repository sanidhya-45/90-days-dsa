// Link list Node
#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int ans;
        if(head== NULL) return -1;
        else if(head->next==NULL) return head->data;
        else
        {
            Node *ptr=head;
            int count=0;
            while(ptr!=NULL)
            {
                count++;
                ptr=ptr->next;
            }
            
            if(count%2==0)
            {
                ptr= head;
                int k=count/2 +1;
                while(k!=1)
                { 
                    ptr = ptr->next;
                    k--;
                }
                ans=ptr->data;
            }
            else
            { 
                ptr = head;
                int k=count/2;
                while(k!=0)
                {
                    ptr = ptr->next;
                    k--;
                }
                ans=ptr->data;
                
             }
         }
        return ans;
        
    }
};