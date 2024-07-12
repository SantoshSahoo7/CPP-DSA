#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    cout<<"enter the co-ordinates of 1st point x1 & y1 : ";
    cin>>x1>>y1;
    
    cout<<"enter the co-ordinates of 2nd point x2 & y2 : ";
    cin>>x1>>y1;
    
    cout<<"enter the co-ordinates of 3rd point x3 & y3 : ";
    cin>>x1>>y1;

    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    if( m1 = m2){
        cout<<"points are lies on the straight line";
    }
    else{
        cout<<"do not lies on the straightline";
    }
}