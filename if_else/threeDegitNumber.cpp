#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n >= 100 && n <= 999){
        cout<<"three degit number.";
    }
    else{
        cout<<"not a three degit numbr.";
    }
}