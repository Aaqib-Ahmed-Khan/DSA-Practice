#include <iostream>
using namespace std;
int main(){
    // size of the array
int arr[]={2,4,6,32};
cout<<sizeof(arr)<<endl;

// length of the array
cout<<sizeof(arr)/sizeof(arr[0])<<endl;
}