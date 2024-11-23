#include<iostream>
using namespace std;

int main (){
    int arrayNumbers[] ={1,2,3,4,5};

    for(int value : arrayNumbers)
    {
        cout << value << " ";
    }

    cout <<endl;

    return 0;
}