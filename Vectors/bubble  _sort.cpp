// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//  int arr[n];
 
//  for (int i=0;i<n;i++){
//     cin>>arr[i];
//  }
//  int counter=1;
//  while(counter<n){
//     for (int i=0;i<n-counter;i++){
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;

//         }
//     }counter++;
//  }
//  for (int i=0;i<n;i++){
//     cout<<arr[i];
//  }cout<<endl;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // For modern C++ use vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble sort
    for (int counter = 1; counter < n; counter++) {
        for (int i = 0; i < n - counter; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

