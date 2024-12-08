#include<iostream>
using namespace std;

int main (){
    int timer;

    cout <<"enter timer (0-59 seconds) ";
    cin >> timer;

    if (timer % 3 ==0)
    cout << "RED LIGHT" <<endl;

    else if (timer % 3 == 1)
    cout << "YELLOW LIGHT " <<endl;

    else 
    cout << "GREEN LIGHT " <<endl;

    return 0;
}