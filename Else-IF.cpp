#include<iostream>

using namespace std;

int main (){
      int age;
    cout<<"please enter the age:" ;
    cin >> age;

    if (age>=7){
        cout<<"Admit to grade school";
    }
     else if (age >= 5){
      cout <<"Admit to kindergarten";
     }
     else if (age >= 3 ){
    cout<<"admit to pre-school";
}
     else 
     {
     cout <<"reject";
    }   
         return 0;
}