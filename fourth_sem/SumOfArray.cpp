#include<iostream>
using namespace std;
int sumArr(int arr[],int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    cout<<"Enter the elements : ";
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"sum: "<<sumArr(arr,n);
}