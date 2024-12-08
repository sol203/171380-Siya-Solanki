#include<iostream>
using namespace std;

int main (){
    int num1;
    int num2;

    cout<<"enter the first number";
    cin >> num1;

    cout <<"enter second number";
    cin >> num2;

    if (num1 > num2)
    cout << "maximum number" <<num1 <<endl;
    else if (num2 > num1 )
    cout << "maximum number" <<num2 <<endl;
    else 
    cout << "both are equal"<<endl;

    return 0;
}