#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s = "aaabbcddabffg";
    stack<char> st;
    st.push(s[0]);
    for(int i=0; i<s.length(); i++){
        if(st.top() != s[i]) st.push(s[i]);
    }
    string str = "";
    while(st.size()>0){
        str += st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    cout<<str;
}