#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num == 0)
        cout << "The number is zero." << endl;
    else if (num % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    return 0;
}
