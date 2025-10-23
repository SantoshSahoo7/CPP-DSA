#include<iostream>
#include<limits>
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
    int max = INT16_MIN;
    int index = -1;
    cout<<endl;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[i][j];
            if(max < sum){
                max =  sum;
                index = i;
            }
        }
    }
    cout<<"the sum is : "<<max<<" and the row number is : "<<index+1;
}