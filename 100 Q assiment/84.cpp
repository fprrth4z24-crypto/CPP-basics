#include <iostream>
using namespace std;

int main() {
    int numbers[6], sumOdd = 0;

    cout << "Enter 6 numbers:\n";
    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 != 0)
            sumOdd += numbers[i];
    }

    cout << "Sum of odd numbers is: " << sumOdd << endl;

    return 0;
}
