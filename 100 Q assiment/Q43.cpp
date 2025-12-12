#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    int a, b, difference;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    difference = a - b;

    difference = abs(difference);

    cout << "The absolute difference between " << a << " and " << b << " is: " << difference << endl;

    return 0;
}
