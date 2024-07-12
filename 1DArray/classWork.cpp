#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];
    cout<<":enter the elements : "; 
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    int item;
    cout<<"enter the number to check array elemts are greater or not : ";
    cin>>item;
    int count = 0;

    for(int i = 0; i <= n-1; i++){
        if(arr[i]>item) count++;
    }
    cout<<count;
}