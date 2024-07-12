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
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        int m = n-1;
    for(int i = 1; i <= m; i++){
        for(int k = 1; k <= i; k++){
            cout<<" ";
        }
        for(int j = 1; j <= m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}