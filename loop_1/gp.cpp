#include<iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"enter the term : ";
    cin>>n;
    a = 1;
    for(i = 1; i <= n; i++){
        cout<<a<<endl;
        a = a * 2;
    }    
}