#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> >v(3,vector<int>(4,2)); 
    // it means we have 2d vector and inside the vaector 3 rows and 4 cols are present and all the values are 3.
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl; // to find size of the row 
    cout<<v[0].size(); // to find size of the column 
}