#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare a string variable 
    string myName, description;

    // prompt user for their full name
    cout << "please enter your full name:";
    getline(cin,myName);

    // prompt user for their description
    cout << "please describe yourself:";
    getline(cin,description);


    cout << "Your name is " << myName << endl;
    cout << "you said the following about yourself" << description << endl;

}