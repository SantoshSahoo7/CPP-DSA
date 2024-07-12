#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive number : ";
    cin>>n;
    if(n % 5 == 0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"does not divisible by 5";
    }
}