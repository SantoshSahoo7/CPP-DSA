#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {4,2,8,7,9};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //almost sorted or not
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"almost sorted";
    else cout<<"not almost sorted";
}