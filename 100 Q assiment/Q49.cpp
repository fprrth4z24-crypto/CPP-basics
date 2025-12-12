#include <iostream>
using namespace std;

int main() {
    string first, second, temp;

    cout << "Enter first string: ";
    cin >> first;

    cout << "Enter second string: ";
    cin >> second;

    temp = first;
    first = second;
    second = temp;

    cout << "\nAfter swapping:\n";
    cout << "First string: " << first << endl;
    cout << "Second string: " << second << endl;

    return 0;
}
