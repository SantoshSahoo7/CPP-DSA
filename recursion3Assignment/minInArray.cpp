#include<iostream>
using namespace std;
void findMin(int arr[],int n,int idx,int min){
    if(idx==n){
        cout<<min;
        return;
    }
    if(min>arr[idx]) min = arr[idx];
    findMin(arr,n,idx+1,min);
}
int main(){
    int arr [] = {5,3,-1,10,19,-12};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMin(arr,n,0,INT16_MAX);
}