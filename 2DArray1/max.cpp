#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row number : ";
    cin>>m;
    cout<<"enter column number : ";
    cin>>n;
    int a[m][n];
    int max = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(max < a[i][j]) max = a[i][j];
        }
    } 
    cout<<max;
}