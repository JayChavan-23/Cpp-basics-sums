#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter 3 numbers :" ;
    cin >>a>>b>>c;
    if(a>b){
        if(a>c){
            cout <<a<< "is bigger"<< endl;
        }
    }
    if(b>c){
        if(b>a){
            cout <<b<< "is bigger"<< endl;
        }
    }
    else {
        cout <<c<<" is bigger"<< endl;
    }
return 0;
}