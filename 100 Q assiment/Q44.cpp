#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, average;

    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;

    average = (a + b + c + d + e) / 5;

    cout << "The average of the 5 numbers is: " << average << endl;

    return 0;
}

