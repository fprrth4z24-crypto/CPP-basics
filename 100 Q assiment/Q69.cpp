#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 7 == 0 || num % 11 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
