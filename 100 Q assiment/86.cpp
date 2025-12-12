#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    if (num < 0)
        cout << "Square root of negative number is not defined." << endl;
    else
        cout << "Square root of " << num << " is " << sqrt(num) << endl;

    return 0;
}
