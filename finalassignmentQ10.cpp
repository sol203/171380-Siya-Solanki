#include<iostream>
using namespace std;

int main (){
    double balance = 2000;
    double withdrawal;
     
     cout << "enter amount to withdraw:";
     cin >> withdrawal;

     if (withdrawal > balance ) {
        cout << "not enough funds!!" <<endl;

     } else {
        balance -= withdrawal;
        cout << "transaction accepted , the new balance is:" << balance << endl;
     }

     return 0;
}