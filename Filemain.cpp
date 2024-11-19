#include <iostream>
using namespace std;

//declare an external variable
extern int globalvar;

int main()
{
    //access the external variable
    cout<< "In main, glovalVar: " << globalvar << end1;

    //modify the external variable
    globalvar = 200;
    cout <<"In main after modification, globalVar:" <<globalvar << end1;

    return 0;
}