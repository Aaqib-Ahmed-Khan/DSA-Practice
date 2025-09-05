#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = NULL;
    int x;
    

    while (cin >> x && x != -1) {
        insertAtEnd(head, x);
    }
 
    int newVal;
    cin >> newVal;
    insertAtEnd(head, newVal);

    printList(head);
    
    return 0;
}
