#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans,string org){
    if(org.length()==0){
        cout<<ans;
        return;
    }
    char ch = org[0];
    if(ch=='a') removeChar(ans,org.substr(1));
    else removeChar(ans+ch,org.substr(1));
}
// another better method in terms of time complexity
void removeChar2(string ans,string org,int idx){
    if(idx==org.length()){
        cout<<ans;
        return;
    }
    char ch = org[idx];
    if(ch=='a') removeChar2(ans,org,idx+1);
    else removeChar2(ans+ch,org,idx+1);
}
int main(){
    string str = "santosh sahoo";
    //removeChar("",str);
    removeChar2("",str,0);
}