//
// Created by aaqib on 10/8/25.
//

 // Using a Node class, create a singly linked list where each new node is added at the end (tail).
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    Node* Head = nullptr;
    Node* Tail = nullptr;
    int arr[]={2,4,6,8,10};
    for (int i=0;i<5;i++) {
        if (Head==nullptr) {
            Head=new Node(arr[i]);
            Tail=Head;
        }

    else {
        Tail->next=new Node(arr[i]);
        Tail=Tail->next;
    }
}
Node* temp=Head;

while (temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }

cout <<endl;
return 0;
}