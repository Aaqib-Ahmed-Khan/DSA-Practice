//
// Created by aaqib on 12/12/25.
//
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *left, *right;

    Node(int value){
        data=value;
        left=right=nullptr;
    }
};

Node *insert(Node *root, int target) {
    if (!root){
        Node *temp=new Node(target);
        return temp;
    }

    if (target<root->data) {
        root->left=insert(root->left,target);
    }
    else {
        root->right=insert(root->right,target);
    }
    return root;
}

void inorder(Node *root) {
    if (!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    int arr[]={12,20,20,1,9,2,3,8,5};
    Node *root = nullptr;
    for (int i=0;i<9;i++){
        root=insert(root,arr[i]);
    }

    inorder(root);
}

