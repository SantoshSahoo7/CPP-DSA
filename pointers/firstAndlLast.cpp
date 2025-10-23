#include<iostream>
using namespace std;
void find(int n,int *ptr1,int *ptr2){
    *ptr1 = n%10;
    while(n > 9){
        n/=10;
    }
    *ptr2 = n;
    return;
    
}
int main(){
    int n,firstdigit,lastDigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastDigit;
    cin>>n;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<""<<lastDigit;
    
}