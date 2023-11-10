#include <iostream>
using namespace std;

int main() {
    int god,mesec,datum,daniumesecu;
    cout << "Day: ";
    cin >> datum;
    cout << "Month: ";
    cin >> mesec;
    cout << "Year: ";
    cin >> god;
    int visok_g;
    visok_g = 0;

    if ((god%4==0 && god%100!=0) ||  (god%400==0))
    {
        visok_g = 1;
    }

    if (mesec<8 && mesec!=2)
    {
        if (mesec%2==0)
        {
            daniumesecu = 30;
        }
        else
        {
            daniumesecu = 31;   
        }
    }
    else if (mesec ==2)
    {
        if (visok_g == 1)
        {
            daniumesecu = 29;
        }
        else
        {
            daniumesecu = 28;
        }
    }
    else
    {
        if (mesec%2==0)
        {
            daniumesecu = 31;
        }
        else
        {
            daniumesecu = 30;  
        } 
    }
    int data,mm,gg;
    if (mesec==12 && daniumesecu==datum)
    {
        gg = god +1;
        mm = 1;
        data = 1;
    }
    else
    {
        if (daniumesecu==datum)
        {
            gg = god;
            mm = mesec+1;
            data = 1;
        }
        else
        {
            gg = god;
            mm = mesec;
            data = datum+1;
        }
    }
    if (datum > daniumesecu || mesec>12 || datum<1 || mesec<1 || god<1)
    {
        cout << "This date does not exist!" << endl;
    }
    else
        cout << "Next day: "<< data << '.' << mm << '.' << gg << endl;
}