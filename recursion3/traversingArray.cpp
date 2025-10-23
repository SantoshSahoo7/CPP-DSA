#include<iostream>
#include<vector>
using namespace std;
//print
void traverse(int arr[],int size,int idx){
    //base case
    if(idx==size) return;
    cout<<arr[idx]<<" ";
    traverse(arr,size,idx+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    traverse(arr,size,0);
}