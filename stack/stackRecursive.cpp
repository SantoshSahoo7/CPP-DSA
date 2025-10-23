#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    if(st.size()==0) return;
    int x  = st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}
void pushAtbuttom(stack<int> &st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtbuttom(st,val);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st); cout<<endl;
    pushAtbuttom(st,-10);
    display(st); cout<<endl;
}