#include <iostream>
#include <cmath>

using namespace std;


int main (){
    float base ,height,area ;
    cout<<"Enter the base " ;
    cin >> base;
    cout<<"Enter the height " ;
    cin >> height;
    area = (0.5*base*height);
    cout <<"Area of triangle is " << area << endl;
    return 0 ;

}