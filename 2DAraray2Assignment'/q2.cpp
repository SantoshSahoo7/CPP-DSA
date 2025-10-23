#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row and col : ";
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    //for transpose matrix :
    for(int i=0; i<m; i++){
        for(int j=i+1; j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout<<endl;
    for(int k=0; k<n; k++){
        int i=0;
        int j=n-1;
        while(i <= j){
            int temp = a[i][k];
            a[i][k] = a[j][k];
            a[j][k] = temp;
            i++;
            j--;
        } 
        cout<<endl;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}