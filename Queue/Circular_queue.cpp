#include <iostream>
using namespace std;

class Queue {
    int size, front, rear;
    int *arr;

public:
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void push(int x) {
        if (isEmpty()) {
            cout << "Pushed " << x << " into the queue" << endl;
            front = rear = 0;
            arr[0] = x;
            return;
        } else if (isFull()) {
            cout << "Queue overflow" << endl;
            return;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "Pushed " << x << " into the queue" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        } else {
            cout << "Popped " << arr[front] << " from the queue" << endl;
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % size;
            }
        }
    }
};

int main() {
    Queue q(5);
    q.push(4);
    q.push(15);
    q.push(20);
    q.pop();
    q.pop();
    int x = q.isEmpty();
    cout << x << " ";
}
