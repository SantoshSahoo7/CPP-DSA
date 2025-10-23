#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer : ";
    cin>>n;
    if(n >= 0){
        n = n;
    }
    else{
        n  = -n;
    }
    cout<<n;
}
