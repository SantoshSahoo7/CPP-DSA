#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int m,n;
    cout<<"entr the row and cols : ";
    cin>>m>>n;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int l1,l2,r1,r2;
    cout<<"enter the two co-ordinates : ";
    cin>>l1>>l2>>r1>>r2;
    int sum = 0;
    for(int i = min(l1,l2); i <= max(l1,l2); i++){
        for(int j = min(r1,r2); j <= max(r1,r2); j++){
            sum += a[i][j];
        }
    }
    cout<<sum<<" ";

}