#include<iostream>
using namespace std;
int product(int *a,int *b){
    return *a * *b;
}
int main(){
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<product(&a,&b);
}