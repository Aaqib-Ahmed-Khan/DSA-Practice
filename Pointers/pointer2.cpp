#include <iostream>
using namespace std;
int main() {
    int arr[5]={11,2,3,4,5};
cout<<arr[4]<<endl;
int *ptr=arr;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    cout<< arr+0<<endl;
    return 0;}