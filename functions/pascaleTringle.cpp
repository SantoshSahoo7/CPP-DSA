#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1; i <= x; i++){
        f *= i;
    }
    return f;
}
int combination(int n,int r){
    int nsr = fact(n)/(fact(r)*fact(n-r));
    return nsr;
}
int main(){
    int n;
    cout<<"enter the lines : ";
    cin>>n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout<<combination(i,j);
        }
        cout<<endl;
    }
}