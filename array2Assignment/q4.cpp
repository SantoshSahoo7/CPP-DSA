#include<iostream>
using namespace std;
void evenOdd(int arr[],int n){
    int i;
    int even,odd;
    even = odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    cout<<even<<" "<<odd;

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