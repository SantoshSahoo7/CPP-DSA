#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>&a){
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&b){
    while(i <= j){
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    int m;
    cout<<"enter the array size : ";
    cin>>m;
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter the rotation : ";
    cin>>k;
    if(k > m){
        k = k % m;
    }
    display(v); 
    int n = v.size();
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}