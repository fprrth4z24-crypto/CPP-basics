#include <iostream>
using namespace std;
int main()
{
    string name ;
    cout << "enter the a string value: ";
    cin >> name ;
    cout << "even index char is: ";
    for(int i=0; i<name.length(); i++){
        if(i%3==0)
        cout<< name[i];
    }
    

    return 0;
}
