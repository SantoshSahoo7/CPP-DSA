#include<iostream>
using namespace std;
int main(){
    int i,j,k,n = 4;
    for(i = 1; i <= n; i++){
        for(k = 1; k <= n-i; k++){  // for space
            cout<<" ";
        }
        for(j = 1; j <= 2*i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}