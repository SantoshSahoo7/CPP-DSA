#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void duplicate(string ans,string org,vector<string> &v,bool flag){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch = org[0];
    char dh = org[1];
    if(org.length()==1){
        if(flag==true) duplicate(ans+ch,org.substr(1),v,true);
        duplicate(ans,org.substr(1),v,true);
        return;
    }
    if(ch==dh){
        if(flag==true) duplicate(ans+ch,org.substr(1),v,false);
        duplicate(ans,org.substr(1),v,true);
    }
    else{
        if(flag==true) duplicate(ans+ch,org.substr(1),v,true);
        duplicate(ans+ch,org.substr(1),v,true);
    }
}
int main(){
    string str = "aba";
    vector<string> v;
    sort(str.begin(),str.end());
    duplicate("",str,v,true);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}