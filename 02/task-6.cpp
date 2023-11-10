#include <iostream>
using namespace std;

int main() {
    double grade;
    int comp,result,payment;
    cout << "Type your grade: ";
    cin >> grade;
    cout << "Competition (0-none, 1-reward): ";
    cin >> comp;

    payment = 100000;
    result = payment;
    
    if (grade>=4.5)
    {
        result = payment*0.6;
    } 
    else if (grade>=3.5)
    {   
        result = payment*0.8;   
    }
    else if (grade>=2.5)
    {
        result = payment*0.9;
    }
    if (comp==1 && grade<4.5)
    {
        result = payment*0.7;
    }  
          
    cout << "You have to pay " << result << endl;
}