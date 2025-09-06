//
// Created by aaqib on 9/6/25.
//
#include <iostream>
using namespace std;
class Car {
public:
    string name;
    int price;
    int seats;

};
int main() {
 Car c1;
    c1.name="Honda";
    c1.price=150000;
    c1.seats=50;
    cout << "Car name is: " << c1.name
    << " and car price is: " << c1.price
    << " and car has " << c1.seats << " seats"<< endl;
}
