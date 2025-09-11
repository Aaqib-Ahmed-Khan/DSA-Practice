//
// Created by aaqib on 9/11/25.
//
#include <iostream>
using namespace std;
int main() {
    int a[5]={1,4,3,2,5};
    int n=5;
    for (int i=0;i<n;i++) {
        int min=i;
        for (int j=i+1;j<n;j++)
            if (a[j]<a[min]){
        min=j;
    }
    if (min !=i) {
        swap(a[i],a[min]);

}}
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
