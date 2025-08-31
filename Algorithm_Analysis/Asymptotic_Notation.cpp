#include <bits/stdc++.h>
using namespace std;
int getFirst(vector<int>& v) {
    return v[0];
}
int sumArray(vector<int>& v) {
    int sum = 0;
    for (int x : v) sum += x;
    return sum;
}
int binarySearch(vector<int>& v, int key) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == key) return mid;
        (v[mid] < key) ? l = mid + 1 : r = mid - 1;
    }
    return -1;
}
int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    cout << "O(1): " << getFirst(v) << "\n";
    cout << "O(n): " << sumArray(v) << "\n";
    cout << "O(log n): " << binarySearch(v, 7) << "\n";
}