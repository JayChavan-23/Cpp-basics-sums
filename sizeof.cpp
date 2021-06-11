/* Write a program in C++ to find Size of fundamental data types. */

#include <iostream>
using namespace std;
int main () {
    int integer ; 
    float decimal ;
    double bigDecimal ;
    char character ;
    string String;
    
    cout << "Size of int is " <<sizeof(integer) << " bytes" <<  endl;
    cout << "Size of float is " <<sizeof(decimal) << " bytes" <<  endl;
    cout << "Size of double is " <<sizeof(bigDecimal) << " bytes" <<  endl;
    cout << "Size of char is " <<sizeof(character) << " bytes" <<  endl;
    cout << "Size of string is " <<sizeof(String) << " bytes" <<  endl;
    return 0;
}