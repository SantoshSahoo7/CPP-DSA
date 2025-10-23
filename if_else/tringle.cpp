#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st side : ";
    cin>>a;
    
    cout<<"enter the 2nd side : ";
    cin>>b;
    
    cout<<"enter the 3rd side : ";
    cin>>c;

    if(a == b  && b == c && a == c){
        cout<<"equilateral triangle";
    }
    else if (a == b || b == c || a == c){
        cout<<"scalene tyriangle";
    }
    else{
        cout<<"isoscales triangle";
    }

}