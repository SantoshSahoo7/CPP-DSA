#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    for(int i=0;i<str[i]!='\0';i++){
        if(i%2!=0) str[i]='#';
    }
    cout<<endl;
    cout<<str;
}