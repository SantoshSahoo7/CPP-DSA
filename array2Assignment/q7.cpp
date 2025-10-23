#include<iostream>
using namespace std;
int main(){
    int n;
    int rem;
    int sum = 0;
    cout<<"enter the array size : ";
    cin>>n;
    int a[n];
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++) cin>>a[i];
    int temp = n;
    while(n > 0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n/10;
    }
    if(sum == temp) cout<<"pallaindrom";
    else cout<<"not a pallindrom";
}