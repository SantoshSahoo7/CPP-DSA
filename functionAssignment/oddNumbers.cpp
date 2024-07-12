#include<iostream>
using namespace std;
void odd(int t1,int t2){

    for(int i = t1; i <= t2; i++){     
    if(i % 2 != 0){
        cout<<i<<endl;
    }        
    }
}
int main(){
    int t1,t2;
    cout<<"enter the term in between odd numbers are print : ";
    cin>>t1>>t2;
    odd(t1,t2);
}