#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout  << "Unesi delilac: ";
    cin >> a;
    cout << "Unesi deljenik: ";
    cin >> b;
    
    if  (b==0)
    {
        cout << "Deljenje 0 nije dozvoljeno." << endl;
    }
    else 
        cout << a/b << endl;
}