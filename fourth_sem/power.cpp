#include<iostream>
using namespace std;
int pow(int x,int n){
    for(int i=1; i<=n; i++){
        x*=n;
    } return x;
}
int main(){
    int x,n;
    cout<<"entr the base : ";
    cin>>x;
    cout<<"enter the power : ";
    cin>>n;
    cout<<pow(x,n);

}