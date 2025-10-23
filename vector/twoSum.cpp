#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int sum;
    cout<<"enter the sum you want to find the sum : ";
    cin>>sum;
    cout<<"enter the vector size : ";
    int n;
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size()-1; i++){
        for(int j = i+1; j < v.size()-1;j++){
            if(v[i]+v[j] == sum){
               cout<<"("<<i<<","<<j<<")"<<endl;
               cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
            }
        }
    }
}