#include<iostream>
#include<vector>
using namespace std;
void subSequence(vector<int> ans,int org[],int n,int idx,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size() + (n-idx)<k) return;
    subSequence(ans,org,n,idx+1,k);
    ans.push_back(org[idx]);
    subSequence(ans,org,n,idx+1,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    subSequence(v,arr,n,0,k);
}