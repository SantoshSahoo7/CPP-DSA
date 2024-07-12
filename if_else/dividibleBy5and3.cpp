#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a degit : ";
         cin>>n;
    // if(n%3==0 && n%5==0){
    //     cout<<"divisible by 3 and 5";
    // }
    if(n % 15 == 0){
        cout<<"divisible by 3 and 5";
    }
    else{
        cout<<"not divisible by 3 snd 5";
    }
}