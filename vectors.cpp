// #include <iostream>
// using namespace std;
// int main(){
//     // size of the array
// int arr[]={2,4,6,32};
// cout<<sizeof(arr)<<endl;

// // length of the array
// cout<<sizeof(arr)/sizeof(arr[0])<<endl;
// cout <<"aaqib";

// }
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v;
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
v.push_back(1);
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
v.push_back(2);
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
v.push_back(3);
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
v.resize(5);
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;

v.resize(10);
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;

v.pop_back();
v.pop_back();
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
return 0;
}


