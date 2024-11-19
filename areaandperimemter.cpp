#include<iostream>

using namespace std;

int main () 
{
   

    float area, perimeter,base,height,hypotenuse;
    cout<< "Enter the base,height,and hypotenuse respectively" <<endl;
    cin >>base >> height>> hypotenuse;
    area = 0.5*base*height;
    perimeter = base + height + hypotenuse;
     cout <<"Area of the triangle:" << area <<endl;
     cout <<"Perimeter of the triangle:" << perimeter <<endl;

  

     return 0;
}