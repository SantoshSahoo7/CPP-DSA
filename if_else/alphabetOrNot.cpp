#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a charecter : ";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii >= 65 && ascii <= 90){
        cout<<"the charectr is uppercasse alphabet";
    } 
    if(ascii >= 97 && ascii <= 122){
        cout<<"the charectr is lowercase alphabet";    
    }
    
}