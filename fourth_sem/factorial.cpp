#include<iostream>
using namespace std;
int fact(int n){
    int a = 1;
    for(int i=1; i<=n; i++){
        a*=i;
    }
    return a;
}
int main (){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<fact(n);
}