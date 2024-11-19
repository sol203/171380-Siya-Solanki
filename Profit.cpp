#include <iostream>

using namespace std;

int main(){
    int buyingprice,sellingprice,profit;
     
     cout<<"enter the buying price of the vehicle" <<endl;
     cin>> buyingprice;
     cout<<"enter the selling price of the vehicle"<<endl;
     cin>> sellingprice;

     profit = sellingprice - buyingprice;

     cout<<"the profit made from the sale of the vehicle is -" << profit <<endl;
     return 0;
}