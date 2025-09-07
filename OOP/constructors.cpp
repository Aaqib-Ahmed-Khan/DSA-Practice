#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person1("Aaqib Ahmed Khan", 21);
    person1.display();
    return 0;
}
