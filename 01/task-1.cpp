#include <iostream>
using namespace std;

bool isGreaterThanTen(int number) {
    if (number>10)
    {
        return true;
    }

    else
    {
        return false;
    }    
}

int main() {
    int a;

    cout << "Unesi broj: ";
    cin >> a;
    
    if (isGreaterThanTen(a)==true)
    {
        cout << "Broj je veći od 10!" << endl;
    }
    else
    {
        cout << "Broj nije veći od 10!" << endl;
    }
}