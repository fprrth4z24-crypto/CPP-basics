#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 4 == 0 && num % 8 != 0)
        cout << num << " is divisible by 4 but not by 8." << endl;
    else
        cout << num << " is NOT divisible by 4 but not by 8." << endl;

    return 0;
}
