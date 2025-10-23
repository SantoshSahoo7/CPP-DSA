#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter no. of lines : ";
    cin>>n;
    for(int i = n; i >= 1; i--){
        for(int k = 0; k <= i-1; k++){
            cout<<" ";        
        }
        for(int j = n; j >= 1; j--){
            cout<<"*";
        }
        for(int j = i-1; j >= 1; j--){
            cout<<"*";
        }
                   cout<<endl;

    }

}