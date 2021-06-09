#include <iostream>
#include <cmath>

using namespace std;


int main (){
    float radius,area,cir ;
    float pi = 3.14 ;
    cout << "Enter the radius"  ;
    cin >> radius ;
    area = (radius*radius)*pi ;
    cir =  2*pi*radius ;
    cout << "Area of circle is "<<area<< endl;
    cout << "Circumference of circle is "<<cir<< endl;


    return 0;
}