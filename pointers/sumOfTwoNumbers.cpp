#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"enter the 1st number : ";
    cin>>*p1;
    cout<<"enter the 2nd number : ";
    cin>>*p2;
    cout<<*p1 + *p2;
}