#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"enter the term to print square : ";
    cin>>n;
    square(n);
    
    int i;
    for(i = 1; i <= n; i++){
        cout<<square(i)<<" ";
    }
    
}