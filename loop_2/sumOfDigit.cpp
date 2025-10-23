#include<iostream>
using namespace std;
int main(){
    int n,i,r,sum,ld;
    sum = 0;
    ld = 0;
    cout<<"enter a number : ";
    cin>>n;
    // while(n != 0){
    //    r = n % 10;
    //    sum = sum + r;
    //    n /= 10;
    // }
    // cout<<sum;
    while(n != 0){
        ld = n % 10;
        sum += ld;
        n /= 10;
    }
    cout<<sum;
}