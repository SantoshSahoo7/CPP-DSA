#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i = 0; i <= n-1; i++){
        for(int j = i+1; j <=  n-1; j++){
            if(arr[i] == arr[j]) {
                flag = true;
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    if(flag == true) cout<<"duplicate present ";
    else cout<<"duplicate not present";
}
