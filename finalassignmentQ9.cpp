#include<iostream>
using namespace std;

int main (){
int age;
    string type;
    int price = 0;

    cout << "enter your age";
    cin >> age;

    cout <<"movie type (regular/3D)"; 
    cin >> type;

    if (type == "regular")
    if (age < 12 || age > 70 ){
    price = 900;
   } 
    else {
    price = 1200;
}

    if (type == "3D")
    if (age < 12 || age > 70){
    price = 1100;
    } 
    else {
        price = 1500;
    }
    else {
        cout <<"invalid movie type" <<endl;
    }
     cout << "movie price is :" <<price <<endl;

     return 0;
}
    