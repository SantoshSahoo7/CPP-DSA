#include<iostream>
#include<vector>
using namespace std;
void positiveNegative(vector<int> &v){
    int i = 0; 
    int j = v.size()-1;
    while(i < j){
        if(v[i] >= 0){
            int temp;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        if(v[i] < 0){
            i++;
        }
        if(v[j] >= 0){
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    positiveNegative(v);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

}