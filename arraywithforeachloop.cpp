// rewriting using for each loop
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
    cout <<"the value at index 5: " <<nums <<endl;
    //print the values using a foreachloop
    cout <<"you enterd the following elements\n ";
    for (int i : nums) {
        cout << nums[i] <<endl;
        sum += nums[i]; // sum=sum+nums[i]; adding array elements
    }
    }

    


