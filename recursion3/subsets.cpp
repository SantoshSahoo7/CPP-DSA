#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans,string org){
    if(org==""){
        cout<<"{"<<ans<<"}"<<" ";
        return;
    }
    char ch = org[0];
    printSubset(ans+ch,org.substr(1));
    printSubset(ans,org.substr(1));
}
// another better method in terms of time complexity by passing index
void printSubset2(string ans,string org,int idx){
    if(idx==org.length()){
      cout<<"{"<<ans<<"}"<<" ";
        return;  
    }
    char ch = org[idx];
    printSubset2(ans+ch,org,idx+1);
    printSubset2(ans,org,idx+1);
}
int main(){
    string str = "aba";
    printSubset("",str);
    cout<<endl;
    printSubset2("",str,0);
}