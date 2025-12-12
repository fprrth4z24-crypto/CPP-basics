#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sumEven = 0;

    cout << "Enter 10 integers:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];

        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        }
    }

    cout << "\nSum of even numbers is: " << sumEven << endl;

    return 0;
}
