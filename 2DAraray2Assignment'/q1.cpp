#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row and cols : ";
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j==n-1) || (i==j)) cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}