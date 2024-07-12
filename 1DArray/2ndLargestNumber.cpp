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
    int max = INT16_MIN;
    for(int i = 0; i <= n-1; i++){
        if(max < arr[i]) max = arr[i];
    }
    int smax = INT16_MIN;
    for(int i = 0; i <= n-1; i++){
        if(smax < arr[i] && arr[i] != max) smax = arr[i];
    } 
    cout<<smax;
}