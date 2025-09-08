#include <iostream>
using namespace std;

class NODE {
public:   // lowercase, not 'Public'
    int data;
    NODE* next;
};

int main() {
    NODE A1;
    A1.data = 4;
    A1.next = nullptr;

    cout << A1.data << endl;
    return 0;
}
