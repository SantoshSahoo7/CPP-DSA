// to check alphabet , degit or special  charecter :
#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"enter a charecter : ";
    cin>>ch;
    if((ch >= 'A' && ch <= 'Z') && (ch >= 'a' && ch <= 'z')){
        cout<<"alphabet";
    } 
    else if(ch >= '0' && ch <= '9'){
        cout<<"degit";
    }
    else{
        cout<<"special charecter";
    }
} 