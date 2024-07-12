#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int a[n];
    cout<<"enter the elements (0,1) : ";

    for(int i=1; i<n; i++){
        cin>>a[i];
    }
    int sum = 0;
    int x = 1;
    for(int i=n-1; i>0; i--){
        sum += a[i]*x;
        x *= 2;
    }
    cout<<sum;
}