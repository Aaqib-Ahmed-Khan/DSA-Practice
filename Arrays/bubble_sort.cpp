//
// Created by aaqib on 11/9/25.
//
#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = n-1; i>0 ; i--) {
        bool swapped = false;
        for (int j=0;j<i;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}