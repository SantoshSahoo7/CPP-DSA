#include<iostream>
using namespace std;
int main(){
    int cp,sp;//cp : cost price    sp : selling price
    cout<<"enter the cost price and selling price : ";
    cin>>cp>>sp;
    if(cp > sp){
        cout<<"loss : "<<cp - sp;
    }
    if(sp > cp){
        cout<<"profit : "<<sp - cp;
    }
    if(cp == sp){
        cout<<"no loss ! no profit !";
    }
}