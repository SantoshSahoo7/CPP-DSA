#include<iostream>
using namespace std;
void evenOdd(int arr[],int n){
    int even,odd;
    even = odd = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            even = arr[i] + 10;
            cout<<even<<" ";
        }
        else{
            odd = arr[i] * 2;
            cout<<odd<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    evenOdd(arr,n);

}