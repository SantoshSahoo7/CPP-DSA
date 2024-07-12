#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"enter the vector size : ";
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int item;
    cout<<"enter the item that you want to find the last index : ";
    cin>>item;
    int idx = -1;

    for(int i = n; i > 0; i--){
        if(v[i] == item)  idx = i;
    }
    cout<<idx;
}