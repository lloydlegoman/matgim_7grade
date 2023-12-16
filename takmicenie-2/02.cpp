#include <iostream>

using namespace std;

// https://arena.petlja.org/sr-Latn-RS/competition/os7-202324-kvalifikacije2#tab_135686
int main() {
    int a,b,c,d,res;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (a<c)
    {
        if (b<c)
        {
            res = c-a;
        }
        else
            if (b>d)
            {
                res = max(b-d,c-a);
            }
            else
                res = c-a;
    }
    else
        if (b<=d)
        {
            res = 0;
        }
        else
            res = d-b;
cout << abs(res)<<endl;
}