#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[10];
    cout<<":enter the elements : "; 
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    bool flag = false;
    int item;
    cout<<"enter the element you want to find : ";
    cin>>item;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] == item) flag = true;
    }
    if(flag == true) cout<<"present";
    else cout<<"404 element not found";
}