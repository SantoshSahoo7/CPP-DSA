#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the term : ";
    cin>>n;
    for(i = 1; i <= 2*n - 1; i += 2){
        cout<<i<<endl;
    }
}