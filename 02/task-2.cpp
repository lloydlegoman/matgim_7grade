#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a>999 && a<10000)
    {
       int n = a /1000;
       int n1 = a/100;
       n1 = n1%10;
       int n2 = a/10;
       n2 = n2%10;
       int n3 = a%10;
       cout << n2*1000 + n3*100+n*10 +n1;
    }
}