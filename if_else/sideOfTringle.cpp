#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a : \n";
    cin>>a;
    cout<<"enter b : \n";
    cin>>b;
    
    cout<<"enter c : \n";
    cin>>c;
    if((a + b > c) || (b + a > c) || (c + a > b)){
        cout<<a<<","<<b<<","<<c<<" can be the sides of a tringle";
    }
    else{
        cout<<"not the sides of tringle";
    }
}