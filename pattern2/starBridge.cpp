#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the lines : ";
    cin>>n;
    for(int i = 1; i <= 2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    m = n-1;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m-i+1; j++){
            cout<<"*";
        }
        //spaces
        for(int k = 1; k <= 2*i-1; k++){
            cout<<" ";
        }
        for(int j = 1; j <= m-i+1; j++){
            cout<<"*";
    }
    cout<<endl;
   }
}