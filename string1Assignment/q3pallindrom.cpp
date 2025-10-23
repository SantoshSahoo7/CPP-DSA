#include<iostream>
#include<string>
using namespace std;
bool check(string &s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
            i++;
            j--;
        }
        return true;
    }
}
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    check(str);
    if(check(str)){
        cout<<"pallindrom";
    } 
    else {
        cout<<"not a palindrom";
    }
}