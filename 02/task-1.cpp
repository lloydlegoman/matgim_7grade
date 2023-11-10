#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a>99 && a<1000)
    {
    int n = a /100;
    int n1 = a/10;
    n1 = n1%10;
    int n2 = a%10;
    cout << n+n1+n2 << endl;
    cout << n2*100+n1*10+n;
    };
}