#include <iostream>
using namespace std;

int main() {
    float numbers[20];  y
    int i;

    cout << "Enter 20 float numbers:\n";

    for (i = 0; i < 20; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    cout << "\nYou entered:\n";
    for (i = 0; i < 20; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
