#include<iostream>
using namespace std;

int main (){
    int days;
    string type;
    double fine;

    cout << "enter book type (regular/chldren's/reference)";
    cin>> type;
    cout << "enter days late";
    cin >> days;

    if (type == "regular")
    fine = days * 2;
    else if (type == "children's")
    fine = days * 1;
    else if (type == "reference")
    fine = days * 2.5;
    else {
        cout << "invalid book type " <<endl;

    }

    cout << "fine amount is: " <<fine <<endl;

    return 0;
}