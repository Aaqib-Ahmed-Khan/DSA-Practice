#include <iostream>
#include <climits>
using namespace std;
class Stack{
int capacity;
int* arr;
int top;
public:
Stack(int c){
    this->capacity=c;
    arr= new int[c];
    this->top=-1;

}
void push(int data){
    if(this->top == this->capacity -1){
        cout<<"overflow\n";
        return;
    }
    this->top++;
    this->arr[this->top]=data;}
int pop() {
    if (this->top == -1) {
        cout << "Underflow\n";
        return INT_MIN;
    }
    int value = this->arr[this->top]; 
    this->top--;                      
    return value;                     
}


int getTop(){
    if(this->top ==-1){
        cout<<"underflow\n";
        return INT_MIN;
    }
return this->arr[this->top];

}

bool isEmpty(){
    return this->top == -1;

}
bool isFull(){
    return this->top ==this->capacity -1;
}

   
};

int main(){
  Stack st(5);
    st.push(1);
    cout << st.getTop() << "\n";  // prints 1

    st.push(2);
    st.push(3);
    cout << st.getTop() << "\n";  // prints 3

    st.push(4);
    st.push(5);
    cout << st.getTop() << "\n";  // prints 5

    st.push(8); // should trigger Overflow

    return 0;
}