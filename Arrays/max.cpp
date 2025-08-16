#include <iostream>
using namespace std;
int main(){
    int array[]={2,4,1,12};
    int max=array[0];
    for (int i=0;i<=4;i++){
        if(array[i]>max){
            max=array[i];
        }                
    }
    cout<<max<<endl;
}