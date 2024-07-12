#include<iostream>
using namespace std;
void starTringle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the stars : ";
    cin>>n;
    starTringle(n);
     starTringle(n);
        starTringle(n);


}