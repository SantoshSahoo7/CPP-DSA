#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"enter the strring : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // for find the maximum 
    sort(v.begin(),v.end());
    int count = 1;
    int maxcount = 1;
    for(int i=1;i<v.size()-1;i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
     if(count>maxcount) maxcount = count;
    }

    // for printing the element that occurs max time 
    count = 1;
    for(int i=1;i<v.size()-1;i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}
