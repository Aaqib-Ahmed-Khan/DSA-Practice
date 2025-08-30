#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

 
    towerOfHanoi(n - 1, source, destination, helper);

    cout << "Move disk " << n << " from " << source << " to " << destination << endl;


    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    cout << "The sequence of moves are:\n";
    towerOfHanoi(n, 'S', 'H', 'D'); 
    return 0;
}
