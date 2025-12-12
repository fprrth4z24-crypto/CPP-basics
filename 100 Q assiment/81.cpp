#include <iostream>
using namespace std;

int main() {
    string str;
    int n;

    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "\nRepeated string:\n";
    for (int i = 0; i < n; i++) {
        cout << str << endl;
    }

    return 0;
}
