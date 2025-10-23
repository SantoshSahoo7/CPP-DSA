#include<iostream>
#include<vector>
using namespace std;

void sort01m2(vector<int> &v){

    int i = 0; 
    int j = v.size() - 1;
    while(i < j){
    
        if(v[i] == 1 && v[j] == 0)
        v[i] = 0;
        v[j] = 1;
        i++;
        j--;
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
    }

}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort01m2(v);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    
}