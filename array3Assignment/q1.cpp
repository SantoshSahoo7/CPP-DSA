#include<iostream>
#include<vector>
using namespace std;
void triplet(vector<int>&v,int item){
    int n = v.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(v[i]+v[j]+v[k] == item){
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                }
            }
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
    int item;
    cout<<"enter the item that for finding triplet : ";
    cin>>item;
    triplet(v,item);
    
}