#include <iostream>
#include <climits>
using namespace std;
class Stack {
    int capacity;
    int* arr;
    int top;
    int size;
public:
    Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    // push
    void push(int value) {
        if(top==size-1) {
            cout<<"Stack overflow";

            return;
        }
        else {
            top++;
            arr[top]=value;
            cout<<"Pushed"<<value<<"into the stack\n";
        }
    }
    int pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return -1;
        }

        else {
            cout << "Popped " << arr[top] << " from the stack\n";

            top--;
            return 0;
        }
    }
    int peek() {
        if (top == -1) {
            cout << "Stack underflow (empty stack)\n";
            return -1;
        }
        else {
            return arr[top];
        }

    }
    bool isEmpty() {
        return top==-1;
    }
    int isSize() {
        return top+1;
    }
};
    int main() {
    Stack st(5);

    st.push(10);
    st.push(20);

    cout << "Peek: " << st.peek() << endl;

    st.pop();
    cout << "Peek: " << st.peek() << endl;

    return 0;
}