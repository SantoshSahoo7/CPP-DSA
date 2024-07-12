#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1; i <= x; i++){
        f *= i;        
    }
    return f;
}
int permutation(int n,int r){
    int nPr = fact(n)/(fact(n-r));
    return nPr;
}
int combination(int n,int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main(){
    int n,r;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : ";
    cin>>r;
    cout<<"permutation : "<<permutation(n,r)<<endl;
    cout<<"combination : "<<combination(n,r);

}