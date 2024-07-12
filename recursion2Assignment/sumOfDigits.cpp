#include<iostream>
using namespace std;
int sum(int n){  
    //base case
    if(n>=0 and n<=9) return n;
    int digit = n%10;
    //recurence reletion
    return digit + sum(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}