#include <iostream>
#include <vector>
using namespace std;

// https://arena.petlja.org/sr-Latn-RS/competition/os7-202324-kvalifikacije2#tab_135685
int main() {
    string months[12]={"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};

    string a;

    cin >> a;
    //a="0312998714216";

    char b1 = a.at(2);
    char b2 = a.at(3);

    string str = string() + b1 + b2;
    int m = stoi(str);

    cout << months[m-1] << endl;
}