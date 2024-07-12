#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    int x = 1;
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i <= n-1; i++){
        x *= arr[i];
    }
    cout<<x;
}