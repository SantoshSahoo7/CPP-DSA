#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string str;
    bool flag = true;
    cout<<"enter the string : "<<endl;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }

    for(int i=0; i<str.size()-1; i++){
        for(int j=0; j<str.size()-1-i; j++){
            if(str[j] > str[j+1]){
                swap(str[j],str[j+1]);
                bool flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<str<<" ";
}