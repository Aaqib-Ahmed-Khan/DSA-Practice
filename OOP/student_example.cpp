//
// Created by aaqib on 9/6/25.
//

#include <iostream>
using namespace std;

class student_example {
public :
    string name;
    int age;
    string grade;


};
int main() {
    student_example student1;
    student1.name="Aaqib";
    student1.age=21;
    student1.grade="A+";
    cout<<"student name is "<<student1.name<<endl;
    cout<<"student age is "<<student1.age<<endl;
    cout<<"student grade is "<<student1.grade<<endl;
}
