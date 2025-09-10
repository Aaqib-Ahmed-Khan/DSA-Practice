#include <iostream>
using namespace std;
void swapping(int *p1,int *p2) {
    int temp = *p1;
    *p1=*p2;
    *p2= temp;
    cout<<p1<<"\n";
    cout<<p1<<"\n";
    cout<<&p1<<"\n";
    cout<<&p1<<"\n";
}



int main() {

    int first=2,second=3;
   cout<<&first<<"\n";
    cout<<&second<<"\n";
    swapping(&first,&second);
    cout <<first<<" "<<second;

}
