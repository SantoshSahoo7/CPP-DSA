#include<iostream>
using namespace std;
float radius(int n){
    return 3.14*n*n;
}
int main(){
    int n;
    cout<<"enter the radius : ";
    cin>>n;
    cout<<"the radius is :"<<radius(n);
}