#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

int main() {
    // Part 1: Printing the array
    int marks[5] = {10, 20, 30, 40, 20};
    int size = 5;

    cout << "Array elements:" << endl;
    for (int i = 0; i < size; i++) {  // Use i < size, not i <= size
        cout << marks[i] << endl;
    }

    // Part 2: Finding smallest and largest number
    int nums[5] = {20, 21, 34, 50, 21};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
