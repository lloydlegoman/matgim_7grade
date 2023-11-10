#include <iostream>
using namespace std;
int main() {
    int a;

    cout << "Unesi broj: ";
    cin >> a;
    
    if (a>10)
    {
        cout << "Broj je veći od 10!";
    }
    else
    {
        cout << "Broj nije veći od 10!" << endl;
    }
}