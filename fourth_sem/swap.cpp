#include<iostream>
using namespace std;
void swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swaping"<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b;
}
int main(){
    int a,b;
    cout<<"enter two number for swap : ";
    cin>>a>>b;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
    swap(a,b);
}