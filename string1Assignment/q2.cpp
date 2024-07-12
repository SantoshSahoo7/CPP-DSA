#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    int n = str.size();
    int count = 0;
    for(int i=0;i<str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') count++;
    }
    cout<<endl;
    cout<<n-count;
}