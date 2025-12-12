#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, average;

    cout << "Enter 4 float numbers: ";
    cin >> a >> b >> c >> d;

    average = (a + b + c + d) / 4;

    cout << "The average is: " << average << endl;

    return 0;
}
