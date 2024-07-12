#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin>>a[i];
    }
    bool flag = true; // shorted;
    for(int i = 0; i < n; i ++){
        if(a[i] <= a[i+1]){
            continue;
        }
        else{
            flag = false;
        }

    }
    if(flag == false){
        cout<<"array is unshorted";
    }
    else{
        cout<<"array is shorted";
    }
    
}