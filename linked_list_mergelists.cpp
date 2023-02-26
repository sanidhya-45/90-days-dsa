// merge two sorted linked lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged=NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
            if(list1->val <= list2->val)
            {
                merged=list1;
                merged->next=mergeTwoLists(list1->next, list2);
            }
            else
            {
                 merged=list2;
                merged->next=mergeTwoLists(list1, list2->next);
            }
        
        return merged;
        
    }
};