#include <iostream>
using namespace std;

//Function that takes two integer parameters a and b
void addAndDisplay(int value1, int value2)
{
    int sum = value1 + value2; //sum is a local variable within the function
    cout<< "sum of"<< value1 << "and" <<value2 << "is" 
    << sum <<end1;
}
int main()
{
    int arg1= 10;
    int arg2 = 20;

    // call the function with arg1 and arg2 as arguments
    addAndDisplay(arg1, arg2);

    return 0;
}