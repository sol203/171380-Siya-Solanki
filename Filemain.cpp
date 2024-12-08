#include <iostream>
using namespace std;

//declare an external variable
extern int globalvar;

int main()
{
    //access the external variable
    cout<< "In main, glovalVar: " << globalvar << endl;

    //modify the external variable
    globalvar = 200;
    cout <<"In main after modification, globalVar:" <<globalvar << endl;

    return 0;
}