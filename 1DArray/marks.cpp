#include<iostream>
using namespace std;
int main(){
    int arr[5];
    //input 
    for(int i = 0; i <= 4; i++){
        cin>>arr[i];
    }

    for(int i = 0; i <= 4; i++){
        if(arr[i] > 35){
            cout<<i<<endl;
        }
    }

}