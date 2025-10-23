#include<iostream>
#include<vector>
using namespace std;
vector<int> sort(vector<int>&arr1,vector<int>&arr2){
    int m = arr1.size();
    int n = arr2.size();
    vector<int>v(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i <= m && j <= n){
    if(arr1[i] < arr2[j]){
        v[k] = arr1[i];
        i++;
    }
    else{
        v[k] = arr2[j];
        j++;
    }
    k++;
    }
    //for remaining elements : 
    if(i == m){
        while(j <= n){
            v[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j == n){
        while(i <= m){
            v[k] = arr1[i];
            k++;
            i++;
        }
    }
    return v;
    


}
int main(){
    vector<int>arr1;
    vector<int>arr2;

    //1st array elements : 
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(5);
    for(int i = 0; i < arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    //2nd array elements : 
    arr2.push_back(1);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(10);
    arr2.push_back(12);

    for(int i = 0; i < arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    //function call : 
    vector<int> v = sort(arr1,arr2);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
