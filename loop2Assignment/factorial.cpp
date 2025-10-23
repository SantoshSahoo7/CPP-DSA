#include<iostream>
using namespace std;
int main(){
    int n,fact = 1;
    cout<<"enter the series calculate the factorial : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
        cout<<fact<<endl;

    }

}