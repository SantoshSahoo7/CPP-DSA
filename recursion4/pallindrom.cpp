#include<iostream>
#include<string>
using namespace std;

//iterative function
bool isPallindrom(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

//recursive function
bool isPallindrom2(string s,int i,int j){
    if(i>j) return true;
    if(s[i] != s[j]) return false;
    else return isPallindrom2(s,i+1,j-1);
}
int main(){
    string s = "racecar";
    //cout<<isPallindrom(s);
    cout<<isPallindrom2(s,0,s.length()-1);
}