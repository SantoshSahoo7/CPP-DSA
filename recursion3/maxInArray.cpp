#include<iostream>
#include<vector>
using namespace std;
void printMax(int arr[],int size,int idx,int max){
    if(idx==size){
        cout<<max<<endl;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,size,idx+1,max);
}
int storeMax(int arr[],int size,int idx){
    if(idx==size) return INT16_MIN;
    return max(arr[idx],storeMax(arr,size,idx+1));

}
int main(){
    int arr[] = {1,5,4,7,8,12,45,60,21,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printMax(arr,size,0,INT16_MIN);

    cout<<storeMax(arr,size,0);
}
