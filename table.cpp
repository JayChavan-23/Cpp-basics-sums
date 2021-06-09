#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number "  ;
    cin >> n ;
    for (int i = 0;i<=10;i++){
        cout << n << " * " <<i<< " = " << n*i << endl;
    }
    return 0;
    }