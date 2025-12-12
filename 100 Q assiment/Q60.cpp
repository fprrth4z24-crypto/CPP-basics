#include <iostream>
using namespace std;

int main() {
    int numbers[6];
    int largest;

    cout << "Enter 6 integers:\n";

    for (int i = 0; i < 6; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    largest = numbers[0];

    for (int i = 1; i < 6; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "\nThe largest number is: " << largest << endl;

    return 0;
}
