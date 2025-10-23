#include<iostream>
using namespace std;
int main(){
    int n,r,rev,sum;
    rev = 0;
    cout<<"enter a number : ";
    cin>>n;
    int temp = n;
    while(n > 0){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    sum = rev + temp;
    cout<<sum;
}