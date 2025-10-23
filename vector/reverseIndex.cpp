#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
        for(int i = 0; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}
void reversePart(int i,int j,vector<int>&a){
    while(i <= j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    vector<int>v;
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"enter the index : ";
    int p,q;
    cin>>p>>q;
    reversePart(p,q,v);
    display(v);
}
    