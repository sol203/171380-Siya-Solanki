#include<iostream>
using namespace std;

int main(){
    double amount;
    double discount;

    cout << " buying amount:";
    cin >> amount;


    if (amount > 2000)
    discount = 0.3;

    else if (amount > 1000)
    discount = 0.2;

    else if (amount > 500)
    discount = 0.1;

    else 
    discount = 0;

    cout << "amount to be paid :" << amount * (1 - discount) <<endl;

    return 0;
}