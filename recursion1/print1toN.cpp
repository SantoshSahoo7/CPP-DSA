#include<iostream>
using namespace std;
void print(int i,int n){
    // base
    if(i>n) return;
    //
    cout<<i<<endl;
    print(i+1,n);

}
int main(){
    int n;
    cin>>n;
    print(1,n);
}