#include<iostream>

using namespace std;

int main (){
    int age;
    cout<<"please enter the age:" ;
    cin >> age;

    if (age>=4){
        cout<<"Admit to school";
    } else{
        cout<<"declined! minumun age not reached" ;
    }

    // using ternary operator
    string message = (age>=4) ? "Admit to school." : "declined! minumun age not reached." ;
    cout << message << endl;

    

    return 0;
}