// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.
// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.
// Example 2:
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
// Constraints:
// The number of nodes in the list is in the range [1, 100].
#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
    public:
    ListNode* middleNode(ListNode* head){
        int count=0;
           ListNode* temp = head;
    while(temp != nullptr){
        count++;
        temp=temp->next;
    }
count /=2;

        for (int i = 0; i < count; i++) {
            head = head->next;
        }

        return head; 
    }
};

int main() {
   
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* mid = sol.middleNode(head);

 
    while (mid != nullptr) {
        cout << mid->val << " ";
        mid = mid->next;
    }
    cout << endl;

    return 0;
}