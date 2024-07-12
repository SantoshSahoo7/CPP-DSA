#include<iostream>
using namespace std;
int main(){
    int i,n,sum = 0;
    cout<<"enter a number : ";
     cin>>n;
    // for(i = 1; i <= n; i++){
    //     if(n%i != 0){
    //         sum += i;
    //     }
    //     else{
    //         sum -= i;
    //     }
    // }
    if(n % 2 == 0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
        cout<<sum;

}
