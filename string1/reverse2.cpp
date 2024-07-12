#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    reverse(s.begin()+1,s.end());
    cout<<s;
}
