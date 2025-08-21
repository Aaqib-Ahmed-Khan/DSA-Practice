#include <iostream>
using namespace std;
int main(){
int arr[5]={1,2,4,5,6};
int x=5;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    if(arr[i]==x){
    cout<<"found at index"<< i<<endl;
    return 0;
    }
}
cout<<"not found";
return 0;  
}



