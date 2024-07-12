#include<iostream>
using namespace std;
void gun(){
    cout<<"hello pw"<<endl;
}
void fun(){
    cout<<"hello cw"<<endl;
    gun();
}
int product(int a,int b){
    return a*b;
}
int main(){
    cout<<product(3,4)<<endl;
    fun();
}