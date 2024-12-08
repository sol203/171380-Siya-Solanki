// rewriting using for loop
#include<iostream>
using namespace std;

int main (){
  int nums [5];
   //input loop
    cout <<"please enter 5 integers: "; // array declaration
    for (int i  = 0; i<5; i++) {
        cin >> nums[i];
    }
    //output loop
    cout <<"the 5 integers entered are : " <<endl;
    for (int i  = 0; i<5; i++) {
        cout << nums[i] <<endl;
    }

    return 0;

}