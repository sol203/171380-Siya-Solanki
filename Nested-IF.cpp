#include<iostream>

using namespace std;

int main() {
    
    string childName, interest;
    int age;

    cout<<"Please enter the child's full name:";
    getline(cin, childName);
    cout<<"Please enter the child's age:";
    cin >> age;

    if (age >= 4 && age <= 10)
    {
        cout <<"please enter the child's interest:";
        cin >> interest;
        if(interest == "soccer")//first nested if
        {
           cout<< childName <<"has been admitted and assigned to the soccer play group";
    } 
    if (interest == "art")//second nested if
    {
       cout<< childName <<"has been admitted and assigned to the art play group"; 
    }
    else {
        cout<<"admit to other group";
    }

    }
          else {
        cout<<"admission unsuccessful. Age is invalid";
    }
      }
    

