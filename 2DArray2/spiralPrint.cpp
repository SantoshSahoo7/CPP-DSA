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
    cout<<endl;

    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;

    while(minr<=maxr && minc<=maxc){
        //for left to right : 
        for(int j=minc; j<=maxc; j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //for top to buttom : 
        for(int i=minr; i<=maxr; i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        //for right to left : 
        for(int j=maxc; j>=minc; j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        //for buttom to top
        for(int i=maxr; i>=minr; i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }
}