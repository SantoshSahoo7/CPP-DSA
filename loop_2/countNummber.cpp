#include<iostream>
using namespace std;
int main(){
    int i,n,temp,count = 0;
    cout<<"enter a number : ";
    cin>>n;
    temp = n;
    while(n != 0){
        n /= 10;
        count++;
    }
    if(temp == 0){
        cout<<1;
    }
    else{
         cout<<count;
    }
   
}