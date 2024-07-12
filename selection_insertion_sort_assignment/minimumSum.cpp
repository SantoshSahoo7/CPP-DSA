#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,1,5,5,2,3};
    int n=6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    //sort the array
    cout<<endl;
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //convert the array innto number 
    int x = 0;
    for(int i=0; i<n; i++){
        x *= 10;
        x += arr[i];
    }
    //printing the sorted array into number 
    cout<<x;
    //finding the 2nd largest number in array
    for(int i=n-1; i>=1; i--){
        if(arr[i] != arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    cout<<endl;
    //printing the 2nd largest number in array 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    //printing in number
    cout<<endl;
    int y = 0;
    for(int i=0; i<n; i++){
        y *= 10;
        y += arr[i];
    }
    cout<<y;
    cout<<endl;
    cout<<"the sum of minimum numbers : "<<x+y;

}