#include <iostream>
using namespace std;

int main() {
    int numbers[5], largest;
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    largest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
