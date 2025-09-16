//
// Created by aaqib on 9/16/25.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = NULL, *fut = NULL;
        while (curr != NULL) {  // ✅ FIXED condition
            fut = curr->next;   // store next node
            curr->next = prev;  // reverse pointer
            prev = curr;        // move prev forward
            curr = fut;         // move curr forward
        }
        return prev;  // new head
    }
};
