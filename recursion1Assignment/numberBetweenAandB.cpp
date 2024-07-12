#include<iostream>
using namespace std;
int number(int a,int b){
    if(a>b) return 0;
    if(a%2==0) return number(a+1,b);
    return a+number(a+2,b);
}
int main(){
    cout<<number(2,8);
}