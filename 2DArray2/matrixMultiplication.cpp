#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"enter the 1st matrix row : ";
    cin>>m;
    int n;
    cout<<"enter the 1st matrix col : ";
    cin>>n;
    int p;
    cout<<"enter the 2nd matrix row : ";
    cin>>p;
    int q;
    cout<<"enter the 2nd matrix col : ";
    cin>>q;
    if(n == p){
        int a[m][n];
        cout<<"entr the elements of 1st matrx : "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
    
        int b[p][q];
        cout<<"entr the elements of 2nd matrx : "<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        int res[n][p];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                //for matrix multiplication : 
                for(int k=0; k<n; k++){
                    res[i][j] = 0;
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout<<"the multiplication is : "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else { 
        cout<<"matrix can not be multiplied.";
    }

}