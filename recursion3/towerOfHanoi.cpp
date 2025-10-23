#include<iostream>
#include<string>
using namespace std;
void hanoi(int n,char a,char b,char c){
    //base case
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    char A,B,C;
    hanoi(n,'A','B','C');
}
