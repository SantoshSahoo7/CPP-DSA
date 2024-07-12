#include<iostream>
using namespace std;
int count(int n){
    int count = 0;
    while(n > 0){
        int rem = n%10;
        count += rem;
        n /= 10;
    }
    return count*count;
}
int main(){
    int n;
    cout<<"enter the digit : ";
    cin>>n;
    cout<<count(n);
}