#include <iostream>
using namespace std;
int main() {
    int a, b,m,n;
    cin >> a;
    cin >> b;
    m = max(a,b);
    n = min(a,b);
    cout << "max: " << m << endl;
    cout << "min: " << n << endl;
}