#include <iostream>
using namespace std;
int main() {
    int a;
    cout  << "Unesi broj: ";
    cin >> a;
    
    if  (a==0)
    {
        cout << "To je 0" << endl;
    }
    else if (a>0)
    {
        cout << "To je positivan broj" << endl; 
    }
    else 
        cout << "To je negativan broj" << endl;
        
}