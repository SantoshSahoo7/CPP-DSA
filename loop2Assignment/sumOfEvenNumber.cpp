#include<iostream>
using namespace std;
int main(){
    int n,sum = 0,r;
    cout<<"enter a to count even digits : ";
    cin>>n;
    while(n > 0){
        r = n % 10;
        if(r % 2 == 0){
             sum += r;
        }
        n /= 10;
    }
    cout<<sum;

}