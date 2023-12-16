#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, summa, storona, mx;
    mx = 0;
    summa = 0;

    cin >> n;
    cin.ignore(); 

    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<int> m;
    int number;

    while (iss >> number) {
        m.push_back(number);
        summa += number;
        if (mx<number) 
            mx=number;
    }
    
    storona=summa/4;
    cout << " summa=" << summa << " storona="<< storona << " mx=" << mx << endl;

    if ((summa%4!=0) || (storona<mx)) {    
        cout << "0" << endl;
        return 0;
    }

    

    cout << "1" << endl;
    return 0;
}
