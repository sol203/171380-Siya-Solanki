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

    if (score >= 70)
    cout << "Grade A " <<endl;

    else if (score >=60)
    cout <<"Grade B" <<endl;

    else if (score >=50)
    cout <<"Grade C" <<endl;

    else if (score >=40)
    cout <<"Grade D" <<endl;

    else if (score >=0)
    cout << "Grade F" <<endl;

    else 
    cout <<"invalid score" <<endl;

    return 0;

}