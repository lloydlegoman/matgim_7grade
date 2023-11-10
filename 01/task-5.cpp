
#include <iostream>
using namespace std;
int main() {
    int a;

    cout << "Unesi godinu: ";
    cin >> a;
    if ((a%4==0 && a%100!=0) ||  (a%400==0))
    {
        cout << "Godina je prestupna" << endl;
    }
    else 
        cout << "Godina nije prestupna" << endl;
}