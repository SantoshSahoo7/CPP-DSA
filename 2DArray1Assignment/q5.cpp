#include<iostream>
#include<limits>
using namespace std;
int main(){
    int m;
    cout<<"enetr row and column number : ";
    cin>>m;
    int a[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i == m/2 || j == m/2){
                cout<<a[i][j]<<" ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}