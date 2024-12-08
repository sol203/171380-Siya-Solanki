#include<iostream>
#include<string>
using namespace std;

bool siyaloancalculator(int age, double balance, string crbstatus, int months){
return (age > 22 && balance > 5000 && crbstatus == "good" && months > 6);
}

int main (){
    int age;
    int months;
    double balance;
    string crbstatus;

    cout << "enter yor age:";
    cin >> age;
    cout << "enter how many months have you been a customer for:";
    cin>> months;
    cout<<"enter your balance:";
    cin>> balance;
    cout << "enter your CRB status (good/bad):";
    cin >> crbstatus;

    if (siyaloancalculator(age,months,crbstatus,balance))
    cout << "you are qualified for the loan" << endl;
    else 
    cout << "you are not qualified for the loan" <<endl;

    return 0;

}