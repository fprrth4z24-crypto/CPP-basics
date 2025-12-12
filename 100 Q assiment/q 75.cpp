#include <iostream>
#include <algorithm> // sort() function के लिए
using namespace std;

int main() {
    int numbers[8];

    cout << "Enter 8 numbers:\n";

    for (int i = 0; i < 8; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Sort in descending order
    sort(numbers, numbers + 8, greater<int>());

    cout << "\nNumbers in descending order:\n";
    for (int i = 0; i < 8; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

