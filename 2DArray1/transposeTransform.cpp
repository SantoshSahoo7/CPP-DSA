#include<iostream>
using namespace std;
int main(){


    // square matrix : 


    int m,n;
    cout<<"enter row number : ";
    cin>>m;
    cout<<"enter column number : ";
    cin>>n;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout<<endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}