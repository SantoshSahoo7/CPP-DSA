#include<iostream>
using namespace std;
int main(){
    int n,ld,rev = 0,sum = 0;   //ld : last digit :
    cout<<"enter a number : ";
    cin>>n;
    while(n > 0){
        rev = rev * 10;
        ld = n % 10;
        rev += ld;
        n /= 10;
    }
    cout<<rev;

}
