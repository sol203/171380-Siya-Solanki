#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    bool boolVar1 = true, boolVar2 = false;
    cout << "Enter first non-zero value" << endl;
    cin >> num1;
    cout << "Enter second non-zero value" << endl;
    cin >> num2;

    // ***arithmetic operators***
    // addition operator

    cout << "Sum of the two numbers:" << num1 + num2 <<endl;
    // subtraction
    cout << "difference of the two numbers:" << num1 - num2 <<endl;
    // multiplication
    cout << "product of the two numbers:" << num1 * num2 <<endl;
    //division
    cout << "division of the two numbers:" << (float)(num1 / num2) <<endl;
    //modulas operator
    cout << "modulus of the two numbers:" << num1 % num2 <<endl;
    //increment operator as prefix
    cout << "prefix increment num1 by 1:" << ++num1 <<endl;
    //increment operator as postfix
    cout << "postfix increment num1 by 1:" << num1++ <<endl;
    //decrement operator as prefix
    cout << "prefix decrement num1 by 1:" << --num1 <<endl;
    //decrement operator as postfix
    cout << "postfix decrement num1 by 1:" << num1-- <<endl;
    // increment and assign operation e.g. increase num1 by 3
    num1 += 3; // this is the same as num1 = num1+3;
    cout << "Increment and assign num1 by 3 :" << num1 << endl;

    //**COMPARISON OPERATORS**
    // greater than operator '>'
    cout <<num1 <<"greater than " << num2 << " = " << (bool)(num1 > num2) <<endl;
    // less than operator '<'
    cout <<num1 <<"less than " << num2 << " = " << (bool)(num1 < num2) <<endl;
    // equal to operator == '>'
    cout <<num1 <<"equal to " << num2 << " = " << (bool)(num1 == num2) <<endl;
    // not equal to operator '!='
    cout <<num1 <<"not equal to " << num2 << " = " << (bool)(num1 != num2) <<endl;
    //Boolean operators '&&'
    cout << boolVar1 << "&&" <<boolVar2 << "=" << (boolVar1 && boolVar2) <<endl;
    //Boolean operators '||'
    cout << boolVar1 << "||" <<boolVar2 << "=" << (boolVar1 || boolVar2) <<endl;
    //Boolean operators '!'
    cout << boolVar1 << "!" <<boolVar2 << "=" << (!boolVar1) <<endl;

    //** POINTER OPERATIONS */
    // Declare a pointer 
    int *ptr = nullptr;
    //assign a value to the pointer 
    ptr = &num1;
    //output addressof num1
    cout << "Address of num1 = " << &num1 <<endl;
    // dereference the pointer to get the value at the memory location
    cout << "Value at memory location pointed by ptr = " << *ptr << endl;

    return 0;
    
}