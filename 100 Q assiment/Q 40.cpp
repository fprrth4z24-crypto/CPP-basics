#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}