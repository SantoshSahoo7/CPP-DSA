#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string arr[] = {"santosh","rajesh","chandan","lucky","himanshu","pinky"};
    int n=6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int  j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}