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
            cout<<j;
        }
        for(int j = i-1; j >= 1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}