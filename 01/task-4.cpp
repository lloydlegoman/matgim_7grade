#include <iostream>
using namespace std;
int main() {
    string a;
    cout  << "Unesi slovo: ";
    cin >> a;
    
    if  (a=="a"||a=="i"||a=="e"||a=="o"||a=="u")
    {
        cout << "To je samoglasnik" << endl;
    }
    else
    {
        cout << "To je suglasnik" << endl; 
    }
}