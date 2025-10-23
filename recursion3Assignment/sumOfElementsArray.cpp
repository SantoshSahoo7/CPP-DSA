#include<iostream>
using namespace std;
void findSum(int arr[],int n,int idx,int sum){
    if(idx==n){
        cout<<sum;
        return;
    }
    sum += arr[idx];
    findSum(arr,n,idx+1,sum);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSum(arr,n,0,0);
}