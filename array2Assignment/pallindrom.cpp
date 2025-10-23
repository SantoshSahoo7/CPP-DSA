#include<iostream>
using namespace std;
bool ispallindrom(int a[],int n){
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n; cout<<"enter the array size : ";
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    cout<<ispallindrom(a,n);



}