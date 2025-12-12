#include <iostream>
using namespace std;

int main() {
    int numbers[5];  

    cout << "Enter 5 numbers:\n";

    // Input लेना
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output दिखाना
    cout << "\nYou entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
