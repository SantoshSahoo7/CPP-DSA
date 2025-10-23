#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
        for(int i = 0; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}
int main(){
    vector<int>v;
    cout<<"enter the vector size : ";
    int n;
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    int i = 0;
    int j = v.size()-1;
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}
    