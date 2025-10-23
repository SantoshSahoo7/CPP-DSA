#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s = "(()()";
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ')'){
            if(st.top()=='(') st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.size()==0) cout<<"true";
    else cout<<"false";
}