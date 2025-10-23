#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    if(n==0) return;
    cout<<arr[n-1]<<" ";
    reverse(arr,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);

    
}

