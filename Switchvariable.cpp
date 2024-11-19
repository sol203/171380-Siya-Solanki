#include<iostream>

using namespace std;

int main()
{
    int option;
    cout<< "Hi. This is your BBIT sem 1 Timetable )may-aug 20204" ;
    cout << "\n1 .Monday\n2.Tuesday\n2.wednesday\n4.Thursday\n5.Friday" <<endl;
    cout << "Please select day of choice (e.g. 1, 2, 3, etc....)" << endl;
    cin >> option;

    switch (option){
        case 1:
        cout <<"Monday Classes\n..............."<< endl;
        cout <<"\t1. BBIT 1102:math for biz"<< endl;
        cout <<"\t2. BBIT 1102:intro to programming"<< endl;
        //break;

        case 2:
        cout <<"tuesday Classes\n..............."<< endl;
        cout <<"\t1. BBIT 1102:intro to programming"<< endl;
        cout <<"\t2. BBIT 1102:ethics"<< endl;
        //break;

        case 3:
        cout <<"wednesday Classes\n..............."<< endl;
        cout <<"\t1. BBIT 1102:maths for business"<< endl;
        cout <<"\t2. BBIT 1102:theology"<< endl;
        cout <<"\t3. BBIT 1102:Fundamentals of IT"<< endl;
        //break;

        case 4:
        cout <<"thurday Classes\n..............."<< endl;
        cout <<"\t1. BBIT 1102:intro to accounting"<< endl;
        cout <<"\t2. BBIT 1102: Fundamentals of IT "<< endl;
        //break;

        
        case 5:
        cout <<"friday Classes\n..............."<< endl;
        cout <<"\t1. BBIT 1102:business computing"<< endl;
        //break;

        default :
        cout<<"inavlid input" << endl;

    }

    return 0;
    
}