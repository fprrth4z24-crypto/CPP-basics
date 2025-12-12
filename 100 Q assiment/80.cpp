#include <iostream>
using namespace std;

int main() {
    float numbers[10];

    cout << "Enter 10 float numbers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nThe numbers are:\n";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
