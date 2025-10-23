#include<iostream>
#include<limits>
using namespace std;
int minimum(int a,int b){
    if(a > b) return b;
    else return a;
}
int main(){
    int n;
    int arr[n];
    cout<<"enter the array size : ";
    cin>>n;
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    // int min =  INT16_MAX ;
    // for(int i = 0; i <= n-1; i++){
    //     if(min > arr[i]) min = arr[i];
    // }
    // cout<<min;
    //using function :
    int min = INT16_MAX;
    for(int i = 0; i <= n-1; i++){
        min = minimum(arr[i],min);
    }
    cout<<min;

}