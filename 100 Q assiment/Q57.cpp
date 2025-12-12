#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 10 == 0) {
        cout << "Yes, it is a multiple of 10." << endl;
    }
    else {
        cout << "No, it is not a multiple of 10." << endl;
    }

    return 0;
}
