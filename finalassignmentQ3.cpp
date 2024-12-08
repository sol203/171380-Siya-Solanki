#include<iostream>
#include<string>
using namespace std;

int main (){
    string name;
    string course;
    int score;

    cout <<" please enter student's full name:";
    getline(cin , name);

     cout <<" please enter student's course:";
    getline(cin , course);

     cout <<" please enter the score:";
    cin >> score;

    cout <<"name" << name <<"course" << course << ",";

    switch (score /10){

     case 7:
    cout << "Grade A " <<endl;
    break;

    case 6:
    cout <<"Grade B" <<endl;
    break;

    case 5:
    cout <<"Grade C" <<endl;
    break;

    case 4:
    cout <<"Grade D" <<endl;
    break;

    default:
    if (score >=0 && score < 40)
    cout <<"Grade F" <<endl;
    break;

    return 0;
    }
   

}