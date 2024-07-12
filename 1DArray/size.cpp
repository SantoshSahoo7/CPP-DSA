#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,6,4,2,5,6,3,2,4,5,4,3,4,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    cout<<n;
}