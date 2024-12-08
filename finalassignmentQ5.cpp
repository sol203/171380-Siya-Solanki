#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int option;
    double radius ,length , width , height , base;

    cout << "area of a circle\n2 , area of a rectangle\n3 , area of a triangle\4, quit\n";
    cout << "choose one";
    cin >> option;

    switch (option) {
        case 1:
        cout <<"enter radius:";
        cin >> radius;
        cout <<"area of the circle" << M_PI * radius * radius <<endl;
        break;

        case 2:
        cout <<"enter width and length:";
        cin >> width >> length;
        cout <<"area of the rectangle" << width * length <<endl;
        break;

        case 3:
        cout <<"enter height and base:";
        cin >> height >> base;
        cout <<"area of the triangle" << 0.5 * base * height <<endl;
        break;

        case 4:
        cout << "existing program" <<endl;

        default:
        cout << "quit"<<endl;

    }
    return 0;


}

