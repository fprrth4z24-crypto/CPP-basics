#include <iostream>
using namespace std;

int main() {
    string a, b, c;

    cout << "Enter your name, place, and college: ";
    cin >> a >> b >> c;

    cout << "Hello, myself " << a << ". I am from " << b 
         << ". I have completed BTech from " << c << "." << endl;

    return 0;
}