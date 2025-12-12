#include <iostream>
using namespace std;

int main() {
    string str;
    bool hasVowel = false;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            hasVowel = true;
            break;  नहीं
        }
    }

    if (hasVowel)
        cout << "The string contains at least one vowel." << endl;
    else
        cout << "The string does not contain any vowels." << endl;

    return 0;
}

