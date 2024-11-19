#include <iostream>
using namespace std;

void myFunction()
{
    //Function code block
    //Local variable declarations and initialization
    int locallvar= 39;
    const int age = 75; // constant local variable
    cout <<"myFunction locallvar="<<locallvar;
}
int main()
{
    //function code block
    //local variable declarations and initialization
    int locallvar = 39;
    const int age = 75;
    cout <<"main locallvar="<<locallvar;
    myFunction();
}