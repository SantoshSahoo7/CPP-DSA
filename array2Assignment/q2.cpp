#include<iostream>
using namespace std;
void maxThreeNumber(int arr[],int n){
    int max1,max2,max3 = 0;
    max1 = max2 = max3 = INT16_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2){
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i] > max3){
            max3 = arr[i];
        }
    }
    if(max1 == INT16_MIN) cout<<"no maximum number : ";
    else cout<<max1<<" ";

    if(max2 == INT16_MIN) cout<<"no maximum number : ";
    else cout<<max2<<" ";

    if(max3 == INT16_MIN) cout<<"no maximum number : ";
    else cout<<max3<<" ";
}
int main(){
    int n;
    int max1,max2,max3;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for(int i = 0; i < n-1; i++){
        cin>>arr[i];
    }
    maxThreeNumber(arr,n);
}