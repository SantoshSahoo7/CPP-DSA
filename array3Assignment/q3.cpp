#include<iostream>
#include<vector>
using namespace std;
void triplet(vector<int>&v){
    int n = v.size();
    for(int i = 0; i < n; i++){
        int j;
        for( j = 0; j < n; j++){
            if(i != j && v[i] == v[j]){
                break;
            }
        }
    
            if(j == n){
                cout<<v[i]<<" ";
                break;
            }
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        int  x;
        cin>>x;
        v.push_back(x);
    }
    triplet(v);
    
}