#include<iostream>
using namespace std;
int main(){
    int arr[]={4,9,8,7};
    int n=5;
    bool flag = true;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]) continue;
            if(arr[i] < arr[j+1]){
                count++;
            }
        }
        int aidx = n-count-1; //actual index
        int dif = aidx-i; 
        if(dif < 0) dif = -dif;
        if(dif > 1){
            flag = false;
            break;
        }
    }
    cout<<flag;
    
}