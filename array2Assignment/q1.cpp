#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,count = 0;
    cout<<"enter the array size : ";
    cin>>n;
    int a[n];
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter the item : ";
    cin>>x;
    for(int i = 0; i < n; i++){
        if(a[i] > x){
            count++;
        }
    }
    cout<<count;
    

}
