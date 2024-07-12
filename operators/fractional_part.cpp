#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
    float a;
    cin>>a;           // we enter 7.5
    int b = (float)a; //7
    if(b < 0){        // for -ve number
        b = b - 1;
    }
    float c = (int)b; //7.0
    a = a - c;
    cout<<a;
}