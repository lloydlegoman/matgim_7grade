#include <iostream>
using namespace std;

int main() {
    int h1,m1,h2,m2,t1,t2,r;
    cin >> h1;
    cin >> m1;
    cin >> h2;
    cin >> m2;
    t1 = h1*60+m1;
    t2 = h2*60+m2;
    if (t2 < t1)
    {
        r = 24*60-t1+t2;
    }
    else 
    {
        r = t2 - t1;
    }
    cout << r/60 << ":" << r%60 << endl;
}