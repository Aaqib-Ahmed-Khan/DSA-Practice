#include <iostream>
#include <vector>
using namespace std;
int main(){
  
   int n;
   cout<<"enter n: ";
   cin>>n;
    vector<int> array(n-1);
    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> array[i];
    }
int sum=0;
  for(int i=0;i<n-1;i++)
    sum+=array[i];
    int expected_sum = n * (n + 1) / 2;
    int missing_number = expected_sum - sum;

    cout << "Missing number is: " << missing_number << endl;
    
    return 0;
}