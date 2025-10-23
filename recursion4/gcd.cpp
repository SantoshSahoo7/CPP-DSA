#include<iostream>
using namespace std;
//iterative
int gcd(int a,int b){
    for(int i=min(a,b); i>=2; i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
//recursive
int gcd2(int a,int b){
    if(a==0) return b;
    else return gcd2(b%a,a);
}
int main(){
    //cout<<gcd(10000,10001);
    cout<<gcd2(24,60);
}