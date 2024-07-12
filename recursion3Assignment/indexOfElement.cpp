#include<iostream>
using namespace std;
int search(int arr[],int n,int idx,int target){
    if(idx == n) return -1;
    if(arr[idx] == target) return idx;
    return search(arr,n,idx+1,target);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,n,0,5);
}