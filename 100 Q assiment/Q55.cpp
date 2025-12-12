#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 integers:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum = sum + numbers[i];  
    }

    cout << "\nThe sum of the 10 numbers is: " << sum << endl;

    return 0;
}
