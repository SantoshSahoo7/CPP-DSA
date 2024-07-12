#include<iostream>
#include<vector>
using namespace std;
void removeNum(vector<int> &ans,int arr[],int n,int idx){
    if(idx==n){
        for(int num : ans){
            cout<<num<<" ";
        }
        return;
    }
    int flag = arr[idx];
    if(flag!=1) ans.push_back(flag);
    removeNum(ans,arr,n,idx+1);
    
}
int main(){
    int arr[] = {1,2,1,3,1,4,5,6,7,8,1,2,3};
    vector<int> ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    removeNum(ans,arr,n,0);
}