#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a%3==0 && a%5==0)
    {
        cout <<"Divide by 15" << endl;
    }
    else if (a%3==0) {
        cout << "Divide by 3" << endl;
    }
    else if (a%5==0){
        cout << "Divide by 5" << endl;
    }
    else {
        cout <<  "Not divisible" << endl;
    }
}