#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
        int m  = n-1;
    for(int i = m; i >= 1; i--){
        for(int k = 1; k <= m-i; k++){
            cout<<" ";
        }
        for(int j = 2*i-1; j >= 1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}