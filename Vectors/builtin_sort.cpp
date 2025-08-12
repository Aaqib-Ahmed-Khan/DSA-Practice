#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector <int> v(5);
for (int i=0;i<v.size();i++){
    cin>>v[i];

}
for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(),v.end());

for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;}


// Q:two sum :Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> v(2);
        int n = arr.size();
        for (int i=0;i < n;i++){
            for (int j = i+1; j < n; j++){
                if(arr[i]+arr[j]==target){
                    v[0]= i;
                    v[1]= j;

                    arr.push_back(10);
                    return v;
                }
            }
        }   return v; }
};

