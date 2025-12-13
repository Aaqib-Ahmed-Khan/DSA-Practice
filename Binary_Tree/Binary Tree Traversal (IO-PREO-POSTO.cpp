//
// Created by aaqib on 12/14/25.
//
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};
void PreOrder(Node *root) {
    if (root==nullptr)
        return;

        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void InOrder(Node *root) {
        if (root== nullptr)
            return;
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);

    }
    void PostOrder(Node *root){
        if (root== nullptr)
            return;
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";

    }

Node* BinaryTree() {
    int x;
    cin>>x;
    if (x==-1)
        return nullptr;
    Node *temp= new Node(x);
    cout<<"Enter the left child of "<<x<<" :";
    temp->left= BinaryTree();
    cout<<"Enter the right child of "<<x<<" :";
    temp->right= BinaryTree();
    return temp;
}

int main() {

    cout << "Enter the root Node: " << endl;
    Node *root=BinaryTree();
cout<<"Pre Order: ";
    PreOrder(root);
    cout << endl << "Post Order: ";
    PostOrder(root);
    cout << endl << "InOrder: ";
    InOrder(root);
    return 0;
}
