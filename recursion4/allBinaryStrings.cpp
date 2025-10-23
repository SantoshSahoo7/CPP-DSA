#include<iostream>
#include<string>
using namespace std;
int n = 3;
void generate(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0');
    generate(s+'1');
}
int main(){
    generate("");
}