#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8};
    int brr[5];
    int n = 5;
    bool flag = true;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++){ //space complexity 0(n)
        brr[i] = arr[i];
    }   

    cout<<endl;
    for(int i=0; i<n-1; i++){ // we sorted the array
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    } // printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
                flag = false;
                break;
            }
        }
        else if(i==n-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag = false;
                break;
            }
        }
        else{
            if(brr[i]!=arr[i]){
                flag = false;
                break;
            }
        }
    }   
    cout<<endl;
    cout<<flag;
}