#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name ;
    cout << "enetr the vale of string :";
    cin >> name ;
    cout << "%3 se hoone waale index :\n";
    for(int i=0;i<name.length();i++){
        if(i % 3 == 0)
        cout << name[i];
    }

    return 0;
}
