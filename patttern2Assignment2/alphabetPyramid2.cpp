#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter no. of lines : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int j = i; j >= 1; j--){
            cout<<(char)(64+j);
        }
        for(int j = 1; j <= i-1; j++){
            cout<<(char)(65+j);
        }
        cout<<endl;
    }
}