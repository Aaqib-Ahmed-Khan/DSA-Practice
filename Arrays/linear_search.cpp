#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6};
    int key=4;
    int ans=-1;
    for(int i=0;i<=5;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    
}
cout<<ans<<endl;
return 0;
}