#include <iostream>
using namespace std;
int main() {
    // int arr[1000];
    // int n;
    // cout<<"enter size of array";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // cin>>arr[i];
    // for (int i=1;i<n;i++)
    // {
    //     for (int j=i;j>0;j--)
    //     {
    //         if(arr[j]<arr[j-1])
    //         swap(arr[j],arr[j-1]);
    //         else
    //         break;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    //
    // }

    // practice 2
int a[5]={1,4,3,6,6};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i=1;i<n;i++) {
        int temp=a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp) {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}