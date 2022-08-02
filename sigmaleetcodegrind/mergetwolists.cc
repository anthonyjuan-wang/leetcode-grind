
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    int val1, val2;
    struct ListNode *head = malloc (sizeof (struct ListNode));
    struct ListNode *curr = head;
    
    if (list1 == NULL){
        return list2;
    }
    if (list2 == NULL){
        return list1;
    }
    
    while (list1 && list2){
        if (list1->val < list2->val){
           curr->next = list1;
           list1 = list1->next;
           curr = curr->next;
        }
        else {
            curr->next = list2;
            list2 = list2->next;
            curr = curr->next;
        }
    }
    
    if (list1){
        curr->next = list1;    
    }
    else if (list2){
        curr->next = list2;
    }
    
    return head->next;
}
