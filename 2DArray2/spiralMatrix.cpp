#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size : ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //for spiral matri
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //left
        for(int i=minc; i<=maxc; i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //right
        for(int i=maxc; i>=minc; i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxc; i>=minc; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}