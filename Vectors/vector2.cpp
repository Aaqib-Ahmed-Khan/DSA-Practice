//
// Created by aaqib on 9/12/25.
//

#include <iostream>
using namespace std;

int main() {
    int v[100];
    int len = 0;
    int cap = 100;

    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    v[len++] = 1;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    v[len++] = 2;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    v[len++] = 3;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    len = 5;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    len = 10;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    len--;
    len--;
    cout << "size: " << len << endl;
    cout << "capacity: " << cap << endl;

    return 0;
}
