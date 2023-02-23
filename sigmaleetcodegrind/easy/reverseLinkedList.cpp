class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr|| head->next == nullptr) return head;   
        ListNode* prev = nullptr;
        ListNode* next = head; 
        while (head){
            next = head->next;
            head->next = prev;
            prev = head; 
            head = next;
        } return prev;
    }
};
