#include <iostream>

using namespace std;

// https://arena.petlja.org/sr-Latn-RS/competition/os7-202324-kvalifikacije2#tab_135687
int main() {

    int a,b,c,d,res1,res2,res3,s,m;
    
    string r = "ne";

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    s = (a+b+c+d)/2;

    if ((a+b)%2!=(c+d)%2)
    {
        cout << r << endl;
    }
    else {
    
        //if (s<=a+b<=s+4 || s<=a+c<=s+4 || s<=a+d<=s+4)
        res1 = abs(s - (a+b));
        res2 = abs(s - (a+c));
        res3 = abs(s - (a+d));

        if (res1 <=4)
        {
            r = "da";
        }
        if (res2 <=4)
        {
            r = "da";
        }
        if (res2 <=4)
        {
            r = "da";
        }

        cout << r << endl;

        if (r=="da") {
            m=res1;
            if (res2<m)
                m=res2;
            if (res3<m)
                m=res3;
            cout << m << endl;
        }
    }
}