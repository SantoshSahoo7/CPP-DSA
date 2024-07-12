#include<iostream>
using namespace std;
int main(){
    int n,r,i,temp,sum = 0;
    temp = n;
    cout<<"enter a number :";
    cin>>n;
    for(i = 1; i < n; i++){
        r = n % i;
        if(r == 0){
            sum = sum + i;
        }
    }
    if( sum = temp){
        cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }
    return 0;
}