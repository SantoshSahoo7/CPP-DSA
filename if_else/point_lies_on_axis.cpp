#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the co-ordinates of the point x & y : ";
    cin>>x>>y;
    if(y == 0){
        cout<<"lies on x-axis";
    }
    else if(x == 0){
        cout<<"lies on y-axis";
    }
    else if( x == 0 && y == 0){
        cout<<"lies on origin";
    }
    else{
        cout<<"lies on xy-plane";
    }
}