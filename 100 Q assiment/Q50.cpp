#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter 5 integers:\n";
    cin >> a >> b >> c >> d >> e;

    int smallest = a;  

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    if (d < smallest)
        smallest = d;
    if (e < smallest)
        smallest = e;

    cout << "\nThe smallest number is: " << smallest << endl;

    return 0;
}
