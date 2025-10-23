#include<iostream>
using namespace std;
int main(){
    int a,i,n;
    cout<<"enter the term : ";
    cin>>n;
    a = 4;
    for(i = 1; i <= n; i++){
        cout<<a<<endl;
        a = a + 3;
    } 
}