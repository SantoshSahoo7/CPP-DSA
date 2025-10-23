#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row number : ";
    cin>>m;
    cout<<"enter column number : ";
    cin>>n;
    int a[m][n];
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
    cout<<endl;
    int b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
             b[i][j] = a[j][i];
             cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}